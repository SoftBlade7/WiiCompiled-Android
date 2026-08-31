#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FFEF4(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_806FFEF4;

loc_806FFEF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x806FFF10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = 0x808C0000u;
    r5 = 0x809C0000u;
    r3 = (r3 + 31476);
    MemoryInline::FlatWrite32(r30, r3);
    r0 = -1;
    r4 = 8;
    MemoryInline::FlatWriteRam32((r5 + 9088), r0);
    r5 = (r5 + 9088);
    r3 = 0x809C0000u;
    r3 = (r3 + 9856);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 16), 0, 740u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 16), r0);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 32), r0);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 48), r0);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r5 + 64), r0);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r5 + 80), r0);
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r5 + 96), r0);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r5 + 112), r0);
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r5 + 128), r0);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r5 + 144), r0);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r5 + 160), r0);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r5 + 176), r0);
    MemoryInline::WriteResolved32(guest_range_0, 176u, (r5 + 192), r0);
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r5 + 208), r0);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r5 + 224), r0);
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r5 + 240), r0);
    MemoryInline::WriteResolved32(guest_range_0, 240u, (r5 + 256), r0);
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r5 + 272), r0);
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r5 + 288), r0);
    MemoryInline::WriteResolved32(guest_range_0, 288u, (r5 + 304), r0);
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r5 + 320), r0);
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r5 + 336), r0);
    MemoryInline::WriteResolved32(guest_range_0, 336u, (r5 + 352), r0);
    MemoryInline::WriteResolved32(guest_range_0, 352u, (r5 + 368), r0);
    MemoryInline::WriteResolved32(guest_range_0, 368u, (r5 + 384), r0);
    MemoryInline::WriteResolved32(guest_range_0, 384u, (r5 + 400), r0);
    MemoryInline::WriteResolved32(guest_range_0, 400u, (r5 + 416), r0);
    MemoryInline::WriteResolved32(guest_range_0, 416u, (r5 + 432), r0);
    MemoryInline::WriteResolved32(guest_range_0, 432u, (r5 + 448), r0);
    MemoryInline::WriteResolved32(guest_range_0, 448u, (r5 + 464), r0);
    MemoryInline::WriteResolved32(guest_range_0, 464u, (r5 + 480), r0);
    MemoryInline::WriteResolved32(guest_range_0, 480u, (r5 + 496), r0);
    MemoryInline::WriteResolved32(guest_range_0, 496u, (r5 + 512), r0);
    MemoryInline::WriteResolved32(guest_range_0, 512u, (r5 + 528), r0);
    MemoryInline::WriteResolved32(guest_range_0, 528u, (r5 + 544), r0);
    MemoryInline::WriteResolved32(guest_range_0, 544u, (r5 + 560), r0);
    MemoryInline::WriteResolved32(guest_range_0, 560u, (r5 + 576), r0);
    MemoryInline::WriteResolved32(guest_range_0, 576u, (r5 + 592), r0);
    MemoryInline::WriteResolved32(guest_range_0, 592u, (r5 + 608), r0);
    MemoryInline::WriteResolved32(guest_range_0, 608u, (r5 + 624), r0);
    MemoryInline::WriteResolved32(guest_range_0, 624u, (r5 + 640), r0);
    MemoryInline::WriteResolved32(guest_range_0, 640u, (r5 + 656), r0);
    MemoryInline::WriteResolved32(guest_range_0, 656u, (r5 + 672), r0);
    MemoryInline::WriteResolved32(guest_range_0, 672u, (r5 + 688), r0);
    MemoryInline::WriteResolved32(guest_range_0, 688u, (r5 + 704), r0);
    MemoryInline::WriteResolved32(guest_range_0, 704u, (r5 + 720), r0);
    MemoryInline::WriteResolved32(guest_range_0, 720u, (r5 + 736), r0);
    MemoryInline::WriteResolved32(guest_range_0, 736u, (r5 + 752), r0);
    // inline leaf 0x800AEF60 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x800AEF60
    r31 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r31 + 10392));
    r3 = MemoryInline::FlatRead32((r4 + 256));
    r4 = (r4 + 12);
    ctx->lr = 0x80700008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x806FEAA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r4 = MemoryInline::FlatRead32((r31 + 10392));
    r4 = MemoryInline::FlatRead32((r4 + 1468));
    MemoryInline::FlatWrite32((r4 + 24), r3);
    r3 = r30;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FFEF4 func_806FFEF4 preserves=true fpr_mask=0x00000000
