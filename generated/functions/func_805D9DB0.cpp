#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805D9DB0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_805D9DB0;

loc_805D9DB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 157;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    MemoryInline::FlatWrite8((r3 + 10816), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r3 + 10812), r31);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x805D9DECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    r4 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 10972), 0, 392u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 10972), static_cast<uint8_t>(r4));
    r0 = 255;
    r3 = (r30 + 10820);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r30 + 10973), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 10974), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 10975), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r30 + 10976), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r30 + 10977), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r30 + 10978), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r30 + 10979), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r30 + 10980), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r30 + 10981), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r30 + 10982), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r30 + 10983), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r30 + 10984), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r30 + 10985), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r30 + 10986), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r30 + 10987), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 10988), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r30 + 10989), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r30 + 10990), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r30 + 10991), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r30 + 10993), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r30 + 10994), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r30 + 10995), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 10984), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 284u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 284u, (r30 + 11256), r31);
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r30 + 11260), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 292u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r30 + 11264), r31);
        MemoryInline::WriteResolved32(guest_range_0, 296u, (r30 + 11268), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 300u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 300u, (r30 + 11272), r31);
        MemoryInline::WriteResolved32(guest_range_0, 304u, (r30 + 11276), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 308u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 308u, (r30 + 11280), r31);
        MemoryInline::WriteResolved32(guest_range_0, 312u, (r30 + 11284), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 316u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 316u, (r30 + 11288), r31);
        MemoryInline::WriteResolved32(guest_range_0, 320u, (r30 + 11292), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 324u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 324u, (r30 + 11296), r31);
        MemoryInline::WriteResolved32(guest_range_0, 328u, (r30 + 11300), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 332u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 332u, (r30 + 11304), r31);
        MemoryInline::WriteResolved32(guest_range_0, 336u, (r30 + 11308), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 340u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 340u, (r30 + 11312), r31);
        MemoryInline::WriteResolved32(guest_range_0, 344u, (r30 + 11316), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 348u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 348u, (r30 + 11320), r31);
        MemoryInline::WriteResolved32(guest_range_0, 352u, (r30 + 11324), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 356u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 356u, (r30 + 11328), r31);
        MemoryInline::WriteResolved32(guest_range_0, 360u, (r30 + 11332), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 364u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 364u, (r30 + 11336), r31);
        MemoryInline::WriteResolved32(guest_range_0, 368u, (r30 + 11340), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 372u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 372u, (r30 + 11344), r31);
        MemoryInline::WriteResolved32(guest_range_0, 376u, (r30 + 11348), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 380u, (r30 + 11352), r31);
    MemoryInline::WriteResolved8(guest_range_0, 384u, (r30 + 11356), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 10988), r4);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 10996), r4);
    MemoryInline::WriteResolved32(guest_range_0, 388u, (r30 + 11360), r31);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r30 + 10992), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r30 + 11000), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r30 + 11001), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r30 + 11002), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r30 + 11003), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r30 + 11004), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r30 + 11005), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r30 + 11006), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r30 + 11007), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r30 + 11008), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r30 + 11009), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r30 + 11010), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r30 + 11011), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r30 + 11012), static_cast<uint8_t>(r31));
    ctx->lr = 0x805D9F08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805FA370u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFCE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805D9DB0 func_805D9DB0 preserves=true fpr_mask=0x00000000
