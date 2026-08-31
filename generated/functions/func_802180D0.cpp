#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80170C5C_statefree(uint32_t);
extern "C" uint64_t func_80170DB4_statefree(uint32_t);

extern "C" void func_802180D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802180D0;

loc_802180D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + 11024);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite32((r3 + 16), r5);
    r3 = r31;
    // inline leaf 0x80170C68 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r0 & 1023);
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x80170C68
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r3));
    r3 = r31;
    // inline leaf 0x80170C7C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r3 = (r3_rot_0 & 1023);
    r0 = (r3 + 1);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x80170C7C
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r3));
    r3 = r31;
    // inline leaf 0x80170C90 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80170C90
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r3));
    r3 = r31;
    // inline leaf 0x80170C98 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 3);
    // end of inlined leaf 0x80170C98
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r3));
    r3 = r31;
    // inline leaf 0x80170CA4 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r3 = (r3_rot_1 & 3);
    // end of inlined leaf 0x80170CA4
    MemoryInline::FlatWrite8((r30 + 7), static_cast<uint8_t>(r3));
    r3 = r31;
    // inline leaf 0x80170DA0 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r13 + -29304);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 7);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_0);
    // end of inlined leaf 0x80170DA0
    MemoryInline::FlatWrite8((r30 + 8), static_cast<uint8_t>(r3));
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80170DB4u) && KnownTranslatedCpuCall<0x80170DB4u>::kAvailable && !KnownTranslatedCpuCall<0x80170DB4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80170DB4u>()) {
        const auto state_free_result_80170DB4_CB7 = func_80170DB4_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80170DB4_CB7);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x80170DB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    }
    MemoryInline::FlatWrite8((r30 + 9), static_cast<uint8_t>(r3));
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80170C5Cu) && KnownTranslatedCpuCall<0x80170C5Cu>::kAvailable && !KnownTranslatedCpuCall<0x80170C5Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80170C5Cu>()) {
        const auto state_free_result_80170C5C_105E = func_80170C5C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_80170C5C_105E);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x80170C5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    }
    r0 = (r3 + -2147483648);
    MemoryInline::FlatWrite32((r30 + 12), r0);
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000201A gpr_write=0xC000002B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802180D0 func_802180D0 preserves=true fpr_mask=0x00000000
