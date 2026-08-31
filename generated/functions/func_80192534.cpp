#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80190358_statefree(uint32_t);

extern "C" void func_80192534(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80192534;

loc_80192534:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r30 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // inline leaf 0x80190FFC (5 guest instruction(s))
    r4 = 0x80340000u;
    r4 = (r4 + 18984);
    r4_addr_0 = (r4 + r3);
    r3 = MemoryInline::FlatRead8(r4_addr_0);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // end of inlined leaf 0x80190FFC
    r29 = r3;
    // inline leaf 0x80191010 (10 guest instruction(s))
    r5 = 0x80340000u;
    r4 = 0x80340000u;
    r5 = (r5 + 18968);
    r0 = -1;
    r5_addr_0 = (r5 + r3);
    r6 = MemoryInline::FlatRead8(r5_addr_0);
    r4 = (r4 + 18984);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r5_addr_1 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_1, static_cast<uint8_t>(r0));
    r4_addr_1 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_1, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80191010
    r4 = 0x80340000u;
    r3 = r31;
    r0 = (r29 * 76);
    r4 = MemoryInline::FlatRead32((r4 + 20700));
    r31 = (r4 + r0);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80190358u) && KnownTranslatedCpuCall<0x80190358u>::kAvailable && !KnownTranslatedCpuCall<0x80190358u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80190358u>()) {
        const auto state_free_result_80190358_991 = func_80190358_statefree(r3);
        r4 = static_cast<uint32_t>(state_free_result_80190358_991);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80190358u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead8((r31 + 12));
    r0 = MemoryInline::FlatRead8((r31 + 13));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r3 = (r3_rot_0 & -512);
    r3 = (r30 + r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 1032));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_8019259C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801925A8;
    }
}

loc_801925A0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 1032), r0);
}

loc_801925A8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 1028));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r30 + 1028), r0);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000000B gpr_write=0xE000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80192534 func_80192534 preserves=true fpr_mask=0x00000000
