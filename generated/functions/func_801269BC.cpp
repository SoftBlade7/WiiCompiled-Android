#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801269BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801269BC;

loc_801269BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r11 = 0x80300000u;
    r7 = 0x80120000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = 0x80120000u;
    r5 = 0x80120000u;
    r4 = 0x80120000u;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r12 = 0;
    r11 = (r11 + -32256);
    r7 = (r7 + 26952);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x80300000u;
    r30 = (r30 + -32352);
    r6 = (r6 + 26964);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0x80280000u;
    r29 = (r29 + -2016);
    r5 = (r5 + 27048);
    r31 = MemoryInline::FlatRead16((r13 + -29692));
    r4 = (r4 + 27064);
    r8 = MemoryInline::FlatRead16((r13 + -29696));
    r10 = 64;
    r0 = MemoryInline::FlatRead16((r13 + -29694));
    r9 = 3282;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 4), r12);
    r3 = (r13 + -26344);
    MemoryInline::FlatWrite32((r13 + -26328), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 16), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 20), r12);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 24), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r30 + 28), r10);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 32), r9);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r8)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 32u, (r30 + 36), r8);
        MemoryInline::WriteResolved16(guest_range_0, 34u, (r30 + 38), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r30 + 40), r7);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r30 + 44), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r30 + 48), r5);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r30 + 52), r4);
    }
    MemoryInline::FlatWrite32((r13 + -26332), r12);
    // inline leaf 0x801A98A0 (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x801A98A0
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D504u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80126A70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80126A78;
    }
}

loc_80126A74:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x8015D444u>(ctx);
}

loc_80126A78:
{
    r3 = 0x80300000u;
    r3 = (r3 + -32352);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8015D50Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_80126A84:
{
    r0 = MemoryInline::FlatRead32((r13 + -26328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80126A8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80126A84;
    }
}

loc_80126A90:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0002003 gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801269BC func_801269BC preserves=true fpr_mask=0x00000000
