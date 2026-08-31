#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800917A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_8009187C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800917A0;

loc_800917A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = MemoryInline::FlatRead32(r3);
}

loc_800917AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800917CC;
    }
}

loc_800917B0:
{
}

loc_800917B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8009181C;
    }
}

loc_800917B8:
{
}

loc_800917BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80091854;
    }
}

loc_800917C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_800917C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800918C4;
    }
}

loc_800917C8:
{
    goto loc_800918F4;
}

loc_800917CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28640));
    ctr = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800917D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800918F4;
    }
}

loc_800917DC:
{
    // nop
}

loc_800917E0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800917F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80091814;
    }
}

loc_800917F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28644));
    r4 = 1;
    r0 = MemoryInline::FlatRead16((r3 + 22));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r0));
    goto loc_800918F4;
}

loc_80091814:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800917E0;
    }
}

loc_80091818:
{
    goto loc_800918F4;
}

loc_8009181C:
{
    r6 = MemoryInline::FlatRead16((r3 + 24));
}

loc_80091824:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r6))) {
        goto loc_80091834;
    }
}

loc_80091828:
{
    r0 = (r6 - r4);
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r0));
    goto loc_80091848;
}

loc_80091834:
{
    r5 = 0;
    r0 = 2;
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r5));
    r4 = (r4 - r6);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80091848:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80091850:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800918F4;
    }
}

loc_80091854:
{
    r5 = 1127219200;
    r0 = (r4 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = 0x80250000u;
    r6 = MemoryInline::FlatRead8((r3 + 20));
    r4 = (r4 + -28640);
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -28632));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    addr_lhax_8009187C_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8009187C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800918B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800918F4;
    }
}

loc_800918B4:
{
    r0 = 3;
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_800918F4;
}

loc_800918C4:
{
    r4 = (r4 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f3.d = MemoryInline::FlatReadFloat64((r2 + -28632));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
}

loc_800918F4:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800917A0 func_800917A0 preserves=true fpr_mask=0x00000000
