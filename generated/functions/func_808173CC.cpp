#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808173CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808173CC;

loc_808173CC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    r31 = 0x808D0000u;
    r31 = (r31 + 25680);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
    r30 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    r29 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
    r28 = r4;
    r4 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r0);
    r3 = MemoryInline::FlatRead32((r29 + -10448));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r0);
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
}

loc_80817418:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081743C;
    }
}

loc_8081741C:
{
    r4 = MemoryInline::FlatRead32((r29 + -10448));
    r3 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -19376));
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_80817444;
}

loc_8081743C:
{
    r3 = 0x808B0000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + -19392));
}

loc_80817444:
{
    r0 = (r28 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r31 + 8));
    f3.d = MemoryInline::FlatReadFloat64((r3 + -19384));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r3 = MemoryInline::FlatRead32((r30 + 308));
    r0 = MemoryInline::FlatRead32((r30 + 312));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = PPC_Fctiwz(f2.d);
    r0 = MemoryInline::FlatRead32((r30 + 316));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f2.d);
    r3 = MemoryInline::FlatRead16(r31);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r29 = fctiwzword0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r3));
}

loc_808174A8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_808174B4;
    }
}

loc_808174AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 308));
    goto loc_80817520;
}

loc_808174B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r29));
}

loc_808174B8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80817518;
    }
}

loc_808174BC:
{
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = (r29 ^ -2147483648);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_808174E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80817518;
    }
}

loc_808174E8:
{
    r0 = (r29 - r3);
    r3 = 0x808B0000u;
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + -19388));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 308));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_80817520;
}

loc_80817518:
{
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -19392));
}

loc_80817520:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    r3 = (r30 + 260);
    r4 = (r1 + 8);
    r5 = (r30 + 48);
    ctx->lr = 0x80817534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022FE14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(r0));
}

loc_8081753C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8081754C;
    }
}

loc_80817540:
{
    r0 = MemoryInline::FlatRead32((r30 + 324));
    MemoryInline::FlatWrite32((r30 + 172), r0);
    goto loc_80817554;
}

loc_8081754C:
{
    r0 = MemoryInline::FlatRead32((r30 + 328));
    MemoryInline::FlatWrite32((r30 + 172), r0);
}

loc_80817554:
{
    r3 = (r30 + 260);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000001F gpr_write=0xF000003B gpr_return=0x00000018 fpr_read=0xFC00001F fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808173CC func_808173CC preserves=true fpr_mask=0x00000000
