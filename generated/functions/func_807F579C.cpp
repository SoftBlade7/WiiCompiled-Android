#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_807F579C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_807F579C;

loc_807F579C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -256), 0, 264u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 260u, (r1 + 260), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 252u, (r1 + 252), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -24136);
    MemoryInline::WriteResolved32(guest_range_1, 248u, (r1 + 248), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_1, 244u, (r1 + 244), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 240u, (r1 + 240), r28);
    r28 = r3;
    r3 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_1, 208u, (r1 + 208), r0);
    MemoryInline::WriteResolved32(guest_range_1, 216u, (r1 + 216), r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_804 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_804[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_804[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 296), 0, 28u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r31 + 304));
    r4 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r3 = 0;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 312));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 392));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 384), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r28 + 396), r0);
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_807F582C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(7))) {
        goto loc_807F583C;
    }
}

loc_807F5830:
{
}

loc_807F5834:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(10))) {
        goto loc_807F583C;
    }
}

loc_807F5838:
{
    r3 = 1;
}

loc_807F583C:
{
}

loc_807F5840:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807F58D8;
    }
}

loc_807F5844:
{
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r31 + 304));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 216));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 296));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F5860:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F589C;
    }
}

loc_807F5864:
{
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 312));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 316));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_807F5880:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F5888;
    }
}

loc_807F5884:
{
    goto loc_807F58D0;
}

loc_807F5888:
{
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 216));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    goto loc_807F58D0;
}

loc_807F589C:
{
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 312));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 320));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_807F58B8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807F58C0;
    }
}

loc_807F58BC:
{
    goto loc_807F58D0;
}

loc_807F58C0:
{
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 216));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
}

loc_807F58D0:
{
    MemoryInline::FlatWriteFloat32((r28 + 388), f3.d);
    goto loc_807F5908;
}

loc_807F58D8:
{
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r31 + 304));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 208));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 296));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807F58F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807F5900;
    }
}

loc_807F58F8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 316));
    goto loc_807F5904;
}

loc_807F5900:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 320));
}

loc_807F5904:
{
    MemoryInline::FlatWriteFloat32((r28 + 388), f0.d);
}

loc_807F5908:
{
    r0 = (0 - r29);
    r4 = 0x808B0000u;
    r0 = (r0 & ~r29);
    MemoryInline::FlatWrite8((r28 + 380), static_cast<uint8_t>(r30));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r4 = (r4 + -23804);
    MemoryInline::FlatWrite8((r28 + 381), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = (r4 + 274);
    r6 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r5 = 1315;
    ctx->lr = 0x807F593Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 260));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r29 = MemoryInline::FlatRead32((r1 + 244));
    r28 = MemoryInline::FlatRead32((r1 + 240));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F579C func_807F579C preserves=true fpr_mask=0x00000000
