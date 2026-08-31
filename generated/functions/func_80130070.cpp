#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012FB18_statefree();

extern "C" void func_80130070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80130070;

loc_80130070:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 196608;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + -29984);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x80310000u;
    r3 = (r30 + -26176);
    ctx->lr = 0x8013009Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    ctx->lr = 0x801300A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8012E8F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8012FB18u) && KnownTranslatedCpuCall<0x8012FB18u>::kAvailable && !KnownTranslatedCpuCall<0x8012FB18u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8012FB18u>()) {
        func_8012FB18_statefree();
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        InvokeDirectCpu<0x8012FB18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
    }
    r31 = (r30 + -26176);
    r4 = 1;
    r3 = (r31 + 196608);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + -30718), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam32((r3 + -30744), r0);
    MemoryInline::FlatWriteRam32((r3 + -30648), r0);
    MemoryInline::FlatWriteRam16((r3 + -30708), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r30 + -26176), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65C0u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r30 + -26176));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r31 + r0);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead8((r30 + -26176));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r30 + -26176), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC18C2 gpr_write=0xFFFC1FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80130070 func_80130070 preserves=true fpr_mask=0x00000000
