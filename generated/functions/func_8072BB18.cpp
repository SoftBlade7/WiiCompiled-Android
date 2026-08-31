#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80733BAC_statefree(uint32_t);
extern "C" uint64_t func_80733BB4_statefree(uint32_t);
extern "C" uint64_t func_80733BBC_statefree(uint32_t);
extern "C" MkwStateFreeResult2 func_80733BC4_statefree(uint32_t);

extern "C" void func_8072BB18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8072BB18;

loc_8072BB18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
    r31 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r30 = MemoryInline::FlatRead32((r4 + 332));
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r5 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r5);
    r3 = MemoryInline::FlatRead32((r31 + 60));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r4);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r0);
    }
    // inline leaf 0x8073BA70 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 4));
    // end of inlined leaf 0x8073BA70
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072BB70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072BBC4;
    }
}

loc_8072BB74:
{
    r3 = 0x809C0000u;
    r4 = 100;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + 420));
    r5 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r5));
}

loc_8072BB90:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072BBA0;
    }
}

loc_8072BB94:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8072BBC4;
}

loc_8072BBA0:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r5 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8072BBAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072BBBC;
    }
}

loc_8072BBB0:
{
    r0 = 7;
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8072BBC4;
}

loc_8072BBBC:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 92), r0);
}

loc_8072BBC4:
{
    r3 = MemoryInline::FlatRead32((r31 + 416));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8072BBD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r31 + 412));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8072BBF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8072BBF4:
{
    r28 = r3;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072BC34;
    }
}

loc_8072BBFC:
{
}

loc_8072BC00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8072BC34;
    }
}

loc_8072BC04:
{
    r4 = MemoryInline::FlatRead32((r31 + 412));
    r3 = MemoryInline::FlatRead32((r31 + 416));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8072BC18:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_8072BC20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8072BC28;
    }
}

loc_8072BC24:
{
    r28 = 0;
}

loc_8072BC28:
{
}

loc_8072BC2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8072BC34;
    }
}

loc_8072BC30:
{
    r29 = 0;
}

loc_8072BC34:
{
}

loc_8072BC38:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8072BC64;
    }
}

loc_8072BC3C:
{
    r4 = MemoryInline::FlatRead32((r31 + 416));
    r3 = (r1 + 20);
    // inline leaf 0x8072BD00 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x8072BD00
    r3 = MemoryInline::FlatRead32((r31 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
}

loc_8072BC64:
{
}

loc_8072BC68:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8072BC94;
    }
}

loc_8072BC6C:
{
    r4 = MemoryInline::FlatRead32((r31 + 412));
    r3 = (r1 + 8);
    // inline leaf 0x8072BD00 (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32(r3, r5);
    r0 = MemoryInline::FlatRead32((r4 + 24));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x8072BD00
    r3 = MemoryInline::FlatRead32((r31 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
}

loc_8072BC94:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80733BACu) && KnownTranslatedCpuCall<0x80733BACu>::kAvailable && !KnownTranslatedCpuCall<0x80733BACu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80733BACu>()) {
        const auto state_free_result_80733BAC_2558 = func_80733BAC_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80733BAC_2558);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80733BACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072BCA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072BCD4;
    }
}

loc_8072BCA4:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80733BB4u) && KnownTranslatedCpuCall<0x80733BB4u>::kAvailable && !KnownTranslatedCpuCall<0x80733BB4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80733BB4u>()) {
        const auto state_free_result_80733BB4_2B18 = func_80733BB4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80733BB4_2B18);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80733BB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072BCB0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072BCD4;
    }
}

loc_8072BCB4:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80733BBCu) && KnownTranslatedCpuCall<0x80733BBCu>::kAvailable && !KnownTranslatedCpuCall<0x80733BBCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80733BBCu>()) {
        const auto state_free_result_80733BBC_30D8 = func_80733BBC_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80733BBC_30D8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80733BBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072BCC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072BCD4;
    }
}

loc_8072BCC4:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80733BC4u) && KnownTranslatedCpuCall<0x80733BC4u>::kAvailable && !KnownTranslatedCpuCall<0x80733BC4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80733BC4u>()) {
        const auto state_free_result_80733BC4_3698 = func_80733BC4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80733BC4_3698[0]);
        r4 = static_cast<uint32_t>(state_free_result_80733BC4_3698[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80733BC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072BCD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072BCE0;
    }
}

loc_8072BCD4:
{
    r3 = r31;
    r4 = (r31 + 272);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_8072BCE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072BB18 func_8072BB18 preserves=true fpr_mask=0x00000000
