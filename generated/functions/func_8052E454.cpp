#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052E454(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8052E454;

loc_8052E454:
{
    r4 = MemoryInline::FlatRead32((r3 + 6016));
    r6 = 1;
    r0 = 2;
    r11 = 0;
    r4 = (r4 & -8);
    r5 = 3;
    MemoryInline::FlatWrite32((r3 + 6000), r11);
    r12 = 0;
    MemoryInline::FlatWrite32((r3 + 5996), r6);
    MemoryInline::FlatWrite8((r3 + 6013), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 5980), r6);
    MemoryInline::FlatWrite32((r3 + 6016), r4);
    ctr = r0;
}

loc_8052E488:
{
    r10 = (r12 & 255);
    r0 = (r12 + 2);
    r5 = (r10 * 240);
    r4 = (r12 + 1);
    r7 = (r0 & 255);
    r0 = (r12 + 3);
    r9 = (r3 + r5);
    r8 = (r4 & 255);
    guest_range_0 = MemoryInline::ResolveRangeHost((r9 + 3312), 0, 1210u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r9 + 3312), static_cast<uint16_t>(r11));
    r6 = (r0 & 255);
    r4 = (r12 + 4);
    r0 = (r12 + 5);
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r9 + 3318), static_cast<uint16_t>(r11));
    r5 = (r4 & 255);
    r10 = (r10 + 1);
    r4 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r9 + 3321), static_cast<uint8_t>(r10));
    r0 = (r8 + 1);
    r7 = (r7 + 1);
    r6 = (r6 + 1);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r9 + 3320), static_cast<uint8_t>(r10));
    r5 = (r5 + 1);
    r4 = (r4 + 1);
    r12 = (r12 + 6);
    MemoryInline::WriteResolved16(guest_range_0, 240u, (r9 + 3552), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 246u, (r9 + 3558), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 249u, (r9 + 3561), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 248u, (r9 + 3560), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 480u, (r9 + 3792), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 486u, (r9 + 3798), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 489u, (r9 + 3801), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 488u, (r9 + 3800), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_0, 720u, (r9 + 4032), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 726u, (r9 + 4038), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 729u, (r9 + 4041), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 728u, (r9 + 4040), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_0, 960u, (r9 + 4272), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 966u, (r9 + 4278), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 969u, (r9 + 4281), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 968u, (r9 + 4280), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 1200u, (r9 + 4512), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_0, 1206u, (r9 + 4518), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 1209u, (r9 + 4521), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 1208u, (r9 + 4520), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052E488;
    }
}

loc_8052E53C:
{
    r4 = MemoryInline::FlatRead32((r3 + 9072));
    r11 = 0;
    r0 = 2;
    r6 = 3;
    r5 = 1;
    r4 = (r4 & -8);
    MemoryInline::FlatWrite8((r3 + 6012), static_cast<uint8_t>(r11));
    r12 = 0;
    MemoryInline::FlatWrite8((r3 + 6013), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r3 + 9056), r11);
    MemoryInline::FlatWrite32((r3 + 9052), r5);
    MemoryInline::FlatWrite8((r3 + 9069), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r3 + 9036), r5);
    MemoryInline::FlatWrite32((r3 + 9072), r4);
    ctr = r0;
}

loc_8052E578:
{
    r10 = (r12 & 255);
    r0 = (r12 + 2);
    r5 = (r10 * 240);
    r4 = (r12 + 1);
    r7 = (r0 & 255);
    r0 = (r12 + 3);
    r9 = (r3 + r5);
    r8 = (r4 & 255);
    guest_range_1 = MemoryInline::ResolveRangeHost((r9 + 6368), 0, 1210u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r9 + 6368), static_cast<uint16_t>(r11));
    r6 = (r0 & 255);
    r4 = (r12 + 4);
    r0 = (r12 + 5);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r9 + 6374), static_cast<uint16_t>(r11));
    r5 = (r4 & 255);
    r10 = (r10 + 1);
    r4 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r9 + 6377), static_cast<uint8_t>(r10));
    r0 = (r8 + 1);
    r7 = (r7 + 1);
    r6 = (r6 + 1);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r9 + 6376), static_cast<uint8_t>(r10));
    r5 = (r5 + 1);
    r4 = (r4 + 1);
    r12 = (r12 + 6);
    MemoryInline::WriteResolved16(guest_range_1, 240u, (r9 + 6608), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 246u, (r9 + 6614), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 249u, (r9 + 6617), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 248u, (r9 + 6616), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 480u, (r9 + 6848), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 486u, (r9 + 6854), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 489u, (r9 + 6857), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 488u, (r9 + 6856), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved16(guest_range_1, 720u, (r9 + 7088), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 726u, (r9 + 7094), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 729u, (r9 + 7097), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 728u, (r9 + 7096), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved16(guest_range_1, 960u, (r9 + 7328), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 966u, (r9 + 7334), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 969u, (r9 + 7337), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 968u, (r9 + 7336), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_1, 1200u, (r9 + 7568), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved16(guest_range_1, 1206u, (r9 + 7574), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 1209u, (r9 + 7577), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 1208u, (r9 + 7576), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052E578;
    }
}

loc_8052E62C:
{
    r4 = 0;
    r0 = 3;
    MemoryInline::FlatWrite8((r3 + 9068), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 9069), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000808 gpr_write=0x00001FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052E454 func_8052E454 preserves=true fpr_mask=0x00000000
