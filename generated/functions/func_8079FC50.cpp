#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079FC50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079FC50;

loc_8079FC50:
{
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 320));
    r5 = (r5 + 20992);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 68u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r5 + 48));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8079FC68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079FC7C;
    }
}

loc_8079FC6C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r5 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079FC74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079FC7C;
    }
}

loc_8079FC78:
{
    r0 = 1;
}

loc_8079FC7C:
{
}

loc_8079FC80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079FCB8;
    }
}

loc_8079FC84:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 92));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r5 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8079FC9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079FCB0;
    }
}

loc_8079FCA0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r5 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079FCA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079FCB0;
    }
}

loc_8079FCAC:
{
    r0 = 1;
}

loc_8079FCB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079FCB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079FD74;
    }
}

loc_8079FCB8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 320));
    r0 = MemoryInline::FlatRead32((r3 + 116));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r5 + 52));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r3 + 116), r0);
    SetCRFloatResident(cr, 0, f0.d, f5.d);
}

loc_8079FCD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079FCE0;
    }
}

loc_8079FCDC:
{
    goto loc_8079FCE4;
}

loc_8079FCE0:
{
    f5.d = f0.d;
}

loc_8079FCE4:
{
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r5 + 64));
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r4 = (r4 + 12104);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r5 + 56));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    r6 = (r0 * 116);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f3.d = PpcFmulsInline(f1.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 320));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r5 + 60));
    r0 = (r0 * 116);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 96), f5.d);
    r6 = (r4 + r6);
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 164));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 92), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 320), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r6 + 56));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f4.d, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 184), f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 180), f1.d);
    r3 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 52));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

loc_8079FD74:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    MemoryInline::FlatWriteFloat32((r3 + 320), f0.d);
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000029 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000027 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079FC50 func_8079FC50 preserves=true fpr_mask=0x00000000
