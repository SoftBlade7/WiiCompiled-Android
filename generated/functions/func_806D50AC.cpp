#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D50AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_addr_6 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806D50AC;

loc_806D50AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r8 = 0;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    goto loc_806D512C;
}

loc_806D50D8:
{
    r9 = 0;
    r7 = 0;
    goto loc_806D5118;
}

loc_806D50E4:
{
    r5 = MemoryInline::FlatRead32((r3 + 216));
    r5_addr_3 = (r5 + r7);
    r0 = MemoryInline::FlatRead32(r5_addr_3);
    r5 = (r8 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 433));
}

loc_806D50F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806D5110;
    }
}

loc_806D50FC:
{
    r5 = MemoryInline::FlatRead32((r3 + 288));
    r6_addr_3 = (r6 + r5);
    r0 = MemoryInline::FlatRead32(r6_addr_3);
}

loc_806D5108:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(200))) {
        goto loc_806D5110;
    }
}

loc_806D510C:
{
    r6_addr_4 = (r6 + r5);
    MemoryInline::FlatWrite32(r6_addr_4, r4);
}

loc_806D5110:
{
    r7 = (r7 + 4);
    r9 = (r9 + 1);
}

loc_806D5118:
{
    r0 = MemoryInline::FlatRead32((r3 + 236));
}

loc_806D5120:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r0))) {
        goto loc_806D50E4;
    }
}

loc_806D5124:
{
    r6 = (r6 + 4);
    r8 = (r8 + 1);
}

loc_806D512C:
{
    r0 = MemoryInline::FlatRead32((r3 + 256));
}

loc_806D5134:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_806D50D8;
    }
}

loc_806D5138:
{
    r29 = 0;
    r30 = 0;
    goto loc_806D5158;
}

loc_806D5144:
{
    r3 = MemoryInline::FlatRead32((r31 + 216));
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    // inline leaf 0x806D9A04 (14 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 433), 0, 12u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 433), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 434), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 435), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 436), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 437), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 438), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 439), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 440), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 441), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 442), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 443), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 444), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806D9A04
    r30 = (r30 + 4);
    r29 = (r29 + 1);
}

loc_806D5158:
{
    r0 = MemoryInline::FlatRead32((r31 + 236));
}

loc_806D5160:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_806D5144;
    }
}

loc_806D5164:
{
    r7 = 0;
    r6 = 0;
    r3 = 600;
    goto loc_806D51A0;
}

loc_806D5174:
{
    r5 = MemoryInline::FlatRead32((r31 + 288));
    r5_addr_5 = (r5 + r6);
    r4 = MemoryInline::FlatRead32(r5_addr_5);
    r0 = (r4 + 1);
    r5_addr_6 = (r5 + r6);
    MemoryInline::FlatWrite32(r5_addr_6, r0);
    r4 = MemoryInline::FlatRead32((r31 + 288));
    r4_addr_2 = (r4 + r6);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_806D5190:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(600))) {
        goto loc_806D5198;
    }
}

loc_806D5194:
{
    r4_addr_3 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_3, r3);
}

loc_806D5198:
{
    r6 = (r6 + 4);
    r7 = (r7 + 1);
}

loc_806D51A0:
{
    r0 = MemoryInline::FlatRead32((r31 + 256));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_806D51A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806D5174;
    }
}

loc_806D51AC:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE00003FB gpr_write=0xE00003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D50AC func_806D50AC preserves=true fpr_mask=0x00000000
