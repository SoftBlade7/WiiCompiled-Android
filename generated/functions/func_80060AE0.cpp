#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801710F0_statefree(uint32_t, uint32_t, uint32_t);

extern "C" void func_80060AE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80060AE0;

loc_80060AE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -27336));
}

loc_80060B08:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80060B34;
    }
}

loc_80060B0C:
{
    r3 = 0x80060000u;
    r3 = (r3 + 3040);
    // inline leaf 0x80171158 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 1304));
    MemoryInline::FlatWrite32((r4 + 1304), r0);
    // end of inlined leaf 0x80171158
    MemoryInline::FlatWrite32((r13 + -27336), r3);
    // inline leaf 0x80171158 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 1304));
    MemoryInline::FlatWrite32((r4 + 1304), r0);
    // end of inlined leaf 0x80171158
    r3 = 0x80060000u;
    r3 = (r3 + 3248);
    // inline leaf 0x8017116C (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 1308));
    MemoryInline::FlatWrite32((r4 + 1308), r0);
    // end of inlined leaf 0x8017116C
    MemoryInline::FlatWrite32((r13 + -27332), r3);
    // inline leaf 0x8017116C (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 1308));
    MemoryInline::FlatWrite32((r4 + 1308), r0);
    // end of inlined leaf 0x8017116C
}

loc_80060B34:
{
    r0 = MemoryInline::FlatRead32((r13 + -27336));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80060B3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060BB8;
    }
}

loc_80060B40:
{
    MemoryInline::FlatWrite32((r13 + -27344), r28);
    r3 = r28;
    ctx->lr = 0x80060B4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80060CE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
}

loc_80060B50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80060B60;
    }
}

loc_80060B54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_80060B58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060B6C;
    }
}

loc_80060B5C:
{
    goto loc_80060BB8;
}

loc_80060B60:
{
    r3 = MemoryInline::FlatRead32((r13 + -27332));
    // inline leaf 0x8017116C (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 1308));
    MemoryInline::FlatWrite32((r4 + 1308), r0);
    // end of inlined leaf 0x8017116C
    goto loc_80060BB8;
}

loc_80060B6C:
{
    r28 = 0x802B0000u;
    r30 = 0;
    r28 = (r28 + 32496);
    r31 = 0;
    r29 = 983040;
}

loc_80060B80:
{
    r3 = r28;
    r4 = r29;
    r5 = 16;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801710F0u) && KnownTranslatedCpuCall<0x801710F0u>::kAvailable && !KnownTranslatedCpuCall<0x801710F0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801710F0u>()) {
        const auto state_free_result_801710F0_122E = func_801710F0_statefree(r3, r4, r5);
        r4 = static_cast<uint32_t>(state_free_result_801710F0_122E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801710F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = (r31 + 1);
    r30 = (r30 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(8));
}

loc_80060B9C:
{
    r29 = (r29 + 8192);
    r28 = (r28 + 16);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80060B80;
    }
}

loc_80060BA8:
{
    r3 = 0x80060000u;
    MemoryInline::FlatWrite32((r13 + -27340), r30);
    r3 = (r3 + 3248);
    // inline leaf 0x8017116C (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r2 + -26840));
    r0 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 1308));
    MemoryInline::FlatWrite32((r4 + 1308), r0);
    // end of inlined leaf 0x8017116C
}

loc_80060BB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF8021FF gpr_write=0xFF8009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80060AE0 func_80060AE0 preserves=true fpr_mask=0x00000000
