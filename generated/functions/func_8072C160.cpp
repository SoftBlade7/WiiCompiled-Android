#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_80733BA4_statefree(uint32_t);

extern "C" void func_8072C160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8072C160;

loc_8072C160:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r4 = MemoryInline::FlatRead32((r3 + 56));
    r5 = MemoryInline::FlatRead32((r3 + 404));
    r4 = MemoryInline::FlatRead32(r4);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 12), 0, 48u, true, false);
    r30 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r5 + 12));
    r4 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8072C194:
{
    r29 = MemoryInline::FlatRead32((r4 + 332));
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072C1AC;
    }
}

loc_8072C19C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r5 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8072C1A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C1AC;
    }
}

loc_8072C1A8:
{
    goto loc_8072C23C;
}

loc_8072C1AC:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 16));
}

loc_8072C1B4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072C1C8;
    }
}

loc_8072C1B8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r5 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8072C1C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C1C8;
    }
}

loc_8072C1C4:
{
    goto loc_8072C23C;
}

loc_8072C1C8:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 20));
}

loc_8072C1D0:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072C1E4;
    }
}

loc_8072C1D4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r5 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8072C1DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C1E4;
    }
}

loc_8072C1E0:
{
    goto loc_8072C23C;
}

loc_8072C1E4:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 24));
}

loc_8072C1EC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072C200;
    }
}

loc_8072C1F0:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r5 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8072C1F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C200;
    }
}

loc_8072C1FC:
{
    goto loc_8072C23C;
}

loc_8072C200:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 28));
}

loc_8072C208:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8072C21C;
    }
}

loc_8072C20C:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r5 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8072C214:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C21C;
    }
}

loc_8072C218:
{
    goto loc_8072C23C;
}

loc_8072C21C:
{
    r30 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8072C224:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072C238;
    }
}

loc_8072C228:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r5 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8072C230:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8072C238;
    }
}

loc_8072C234:
{
    goto loc_8072C23C;
}

loc_8072C238:
{
    r30 = 0;
}

loc_8072C23C:
{
    r3 = MemoryInline::FlatRead32((r3 + 412));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8072C250u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8072C254:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8072C280;
    }
}

loc_8072C258:
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

loc_8072C280:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8072C284:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072C304;
    }
}

loc_8072C288:
{
    r4 = MemoryInline::FlatRead32((r31 + 404));
    r3 = r29;
    MemoryInline::FlatWrite32((r4 + 8), r30);
    ctx->lr = 0x8072C298u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80733C60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 332));
    ctx->lr = 0x8072C2A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80733C60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r6 = 0x808D0000u;
    r4 = 0x808D0000u;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r6 = (r6 + -24796);
    r4 = (r4 + -25088);
    r6_addr_1 = (r6 + r5);
    r5 = MemoryInline::FlatRead32(r6_addr_1);
    r6_addr_2 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r0 = (r0 + r5);
    r0 = (r4 + r0);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_8072C2DC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8072C2F0;
    }
}

loc_8072C2E0:
{
    r3 = r31;
    r4 = (r31 + 316);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_8072C304;
}

loc_8072C2F0:
{
}

loc_8072C2F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8072C304;
    }
}

loc_8072C2F8:
{
    r3 = r31;
    r4 = (r31 + 360);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_8072C304:
{
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80733BA4u) && KnownTranslatedCpuCall<0x80733BA4u>::kAvailable && !KnownTranslatedCpuCall<0x80733BA4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80733BA4u>()) {
        const auto state_free_result_80733BA4_2649 = func_80733BA4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80733BA4_2649[0]);
        r4 = static_cast<uint32_t>(state_free_result_80733BA4_2649[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80733BA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072C310:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072C320;
    }
}

loc_8072C314:
{
    r3 = r31;
    r4 = (r31 + 140);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_8072C320:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8072C160 func_8072C160 preserves=true fpr_mask=0x00000000
