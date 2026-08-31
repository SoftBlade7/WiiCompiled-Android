#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800279B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;

    goto loc_800279B0;

loc_800279B0:
{
    r5 = 0x802B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 96));
    r5 = (r5 + -19384);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 112));
    f5.d = MemoryInline::FlatReadFloat32((r5 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 36));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 96));
    f4.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 112));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f5.d, f1.d);
    f6.d = MemoryInline::FlatReadFloat32((r5 + 40));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 128));
    f5.d = PpcFmulsInline(f6.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r5 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80027A14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80027A20;
    }
}

loc_80027A18:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

loc_80027A20:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31144));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80027A28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80027A4C;
    }
}

loc_80027A2C:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80027A30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80027A44;
    }
}

loc_80027A34:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80027A38:
{
    r3 = cr;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    goto loc_80027A68;
}

loc_80027A44:
{
    r3 = 1;
    goto loc_80027A68;
}

loc_80027A4C:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80027A50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80027A5C;
    }
}

loc_80027A54:
{
    r3 = 0;
    goto loc_80027A68;
}

loc_80027A5C:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80027A60:
{
    r3 = cr;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1);
}

loc_80027A68:
{
    r4 = 0x802B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31144));
    r4 = (r4 + -19384);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 56));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80027A7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80027A98;
    }
}

loc_80027A80:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 92));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80027A88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80027A8C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

loc_80027A98:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 88));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80027AA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80027AA4:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800279B0 func_800279B0 preserves=true fpr_mask=0x00000000
