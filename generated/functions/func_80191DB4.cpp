#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801903BC_statefree(uint32_t, uint32_t);
extern "C" uint64_t func_80190474_statefree(uint32_t, uint32_t);

extern "C" void func_80191DB4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    goto loc_80191DB4;

loc_80191DB4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r31 + 44));
    r0 = MemoryInline::FlatRead32((r31 + 52));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r4 + r0);
    r4 = (static_cast<int32_t>(r0) >> 16);
    // inline leaf 0x80190384 (14 guest instruction(s))
    r5 = 0x80340000u;
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r5 = (r5 + 18984);
    r3 = 0x80340000u;
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
    r3 = MemoryInline::FlatRead32((r3 + 19084));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 100);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    // end of inlined leaf 0x80190384
    r0 = MemoryInline::FlatRead8((r31 + 12));
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 172));
    r4 = (static_cast<int32_t>(r0) >> 16);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x801903BCu) && KnownTranslatedCpuCall<0x801903BCu>::kAvailable && !KnownTranslatedCpuCall<0x801903BCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801903BCu>()) {
        func_801903BC_statefree(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->xer = xer;
        InvokeDirectCpu<0x801903BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r31 + 12));
    r5 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r5 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 104));
    r0 = MemoryInline::FlatRead32((r4 + 108));
    r0 = (r5 + r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(16) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 16);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80190474u) && KnownTranslatedCpuCall<0x80190474u>::kAvailable && !KnownTranslatedCpuCall<0x80190474u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80190474u>()) {
        const auto state_free_result_80190474_FC0 = func_80190474_statefree(r3, r4);
        r5 = static_cast<uint32_t>(state_free_result_80190474_FC0);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[31] = r31;
        ctx->xer = xer;
        InvokeDirectCpu<0x80190474u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r31 = ctx->gpr[31];
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead8((r31 + 12));
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 236));
    ctx->lr = 0x80191E40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x801903F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000008A gpr_write=0x800001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80191DB4 func_80191DB4 preserves=true fpr_mask=0x00000000
