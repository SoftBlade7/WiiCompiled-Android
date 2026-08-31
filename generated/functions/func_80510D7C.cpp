#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80510D7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80510D7C;

loc_80510D7C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r7 = 0x80890000u;
    r9 = MemoryInline::FlatRead32(r3);
    r6 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    r8 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r9 + 12));
    r10 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r9 + 8));
    r9 = 0;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f7.d = MemoryInline::FlatReadFloat32((r7 + -1840));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + -1836));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    goto loc_80510EF4;
}

loc_80510DC4:
{
    r6 = MemoryInline::FlatRead32((r8 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r8 + 64));
    r7 = MemoryInline::FlatRead32(r6);
    f2.d = (-(f1.d));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    f5.d = MemoryInline::FlatReadFloat32(r7);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r8 + 60));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f7.d);
}

loc_80510E08:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80510E14;
    }
}

loc_80510E0C:
{
    r0 = 0;
    goto loc_80510E44;
}

loc_80510E14:
{
    f4.d = MemoryInline::FlatReadFloat32((r8 + 72));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r8 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f7.d);
}

loc_80510E34:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
}

loc_80510E44:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80510E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80510E54;
    }
}

loc_80510E4C:
{
    r0 = 1;
    goto loc_80510ECC;
}

loc_80510E54:
{
    f4.d = MemoryInline::FlatReadFloat32((r6 + 16));
    r0 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f6.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f5.d = PpcFmulsInline(f6.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = PpcFmulsInline(f4.d, f2.d);
    f2.d = (-(f3.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    SetCRFloatResident(cr, 0, f1.d, f7.d);
}

loc_80510EA4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80510EBC;
    }
}

loc_80510EAC:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80510EB0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80510EBC;
    }
}

loc_80510EB8:
{
    r0 = 1;
}

loc_80510EBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80510EC0:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80510ECC;
    }
}

loc_80510EC8:
{
    r0 = 0;
}

loc_80510ECC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80510ED0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80510EE0;
    }
}

loc_80510ED4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80510ED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80510EE8;
    }
}

loc_80510EDC:
{
    goto loc_80510EEC;
}

loc_80510EE0:
{
    r3 = 0;
    goto loc_80510F10;
}

loc_80510EE8:
{
    r9 = 1;
}

loc_80510EEC:
{
    r8 = (r8 + 24);
    r10 = (r10 + 1);
}

loc_80510EF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_80510EFC:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r0))) {
        goto loc_80510DC4;
    }
}

loc_80510F00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_80510F04:
{
    r3 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80510F10;
    }
}

loc_80510F0C:
{
    r3 = 2;
}

loc_80510F10:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007CB gpr_return=0x00000008 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80510D7C func_80510D7C preserves=true fpr_mask=0x00000000
