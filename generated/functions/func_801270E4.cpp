#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801270E4(CpuContext* MKW_RESTRICT ctx)
{
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801270E4;

loc_801270E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r5 = MemoryInline::FlatRead32((r13 + -26228));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 82), 0, 184u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 82));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r13 + -26240));
    r0 = (r5 + r0);
    r7 = MemoryInline::FlatRead32((r13 + -26252));
    MemoryInline::FlatWrite32((r13 + -26228), r0);
    r6 = MemoryInline::FlatRead32((r13 + -26264));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 84));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r5 = MemoryInline::FlatRead32((r13 + -26232));
    r0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r13 + -26244));
    MemoryInline::FlatWrite32((r13 + -26240), r0);
    r27 = MemoryInline::FlatRead32((r13 + -26256));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 86));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r28 = MemoryInline::FlatRead32((r13 + -26268));
    r0 = (r7 + r0);
    r29 = MemoryInline::FlatRead32((r13 + -26236));
    MemoryInline::FlatWrite32((r13 + -26252), r0);
    r30 = MemoryInline::FlatRead32((r13 + -26248));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 88));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r31 = MemoryInline::FlatRead32((r13 + -26260));
    r0 = (r6 + r0);
    r12 = MemoryInline::FlatRead32((r13 + -26272));
    MemoryInline::FlatWrite32((r13 + -26264), r0);
    r11 = MemoryInline::FlatRead32((r13 + -26276));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 90));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r10 = MemoryInline::FlatRead32((r13 + -26280));
    r0 = (r5 + r0);
    r9 = MemoryInline::FlatRead32((r13 + -26284));
    MemoryInline::FlatWrite32((r13 + -26232), r0);
    r8 = MemoryInline::FlatRead32((r13 + -26288));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 92));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = MemoryInline::FlatRead32((r13 + -26292));
    r0 = (r4 + r0);
    r6 = MemoryInline::FlatRead32((r13 + -26296));
    MemoryInline::FlatWrite32((r13 + -26244), r0);
    r5 = MemoryInline::FlatRead32((r13 + -26300));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 94));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = MemoryInline::FlatRead32((r13 + -26304));
    r0 = (r27 + r0);
    MemoryInline::FlatWrite32((r13 + -26256), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 96));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r28 + r0);
    MemoryInline::FlatWrite32((r13 + -26268), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 98));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r29 + r0);
    MemoryInline::FlatWrite32((r13 + -26236), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r3 + 100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r30 + r0);
    MemoryInline::FlatWrite32((r13 + -26248), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 102));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r31 + r0);
    MemoryInline::FlatWrite32((r13 + -26260), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 22u, (r3 + 104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r12 + r0);
    MemoryInline::FlatWrite32((r13 + -26272), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 168u, (r3 + 250));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r11 + r0);
    r11 = (r1 + 32);
    MemoryInline::FlatWrite32((r13 + -26276), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 170u, (r3 + 252));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r10 + r0);
    MemoryInline::FlatWrite32((r13 + -26280), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 172u, (r3 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r9 + r0);
    MemoryInline::FlatWrite32((r13 + -26284), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 174u, (r3 + 256));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r8 + r0);
    MemoryInline::FlatWrite32((r13 + -26288), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 176u, (r3 + 258));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r13 + -26292), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 178u, (r3 + 260));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r6 + r0);
    MemoryInline::FlatWrite32((r13 + -26296), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 180u, (r3 + 262));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r13 + -26300), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 182u, (r3 + 264));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r13 + -26304), r0);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800200A gpr_write=0xF8001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801270E4 func_801270E4 preserves=true fpr_mask=0x00000000
