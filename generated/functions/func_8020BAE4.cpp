#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020BAE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r10_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8020BAE4;

loc_8020BAE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r7 = 65536;
    r12 = 32;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r7 + -257);
    r0 = 0;
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r10 = (r10_rot_0 & 255);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = 70;
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r9 = (r9_rot_0 & 255);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r8 = (r8_rot_0 & 255);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r7 = (r7_rot_0 & 255);
    r30 = 86;
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r1 + 15), static_cast<uint8_t>(r5));
    r5 = 32;
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r1 + 19), static_cast<uint8_t>(r4));
    r4 = (r1 + 8);
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r1 + 8), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r1 + 9), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r1 + 10), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r1 + 11), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 12), static_cast<uint16_t>(r11));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r1 + 14), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r1 + 16), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r1 + 17), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r1 + 18), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r12)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r1 + 20), r12);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r1 + 22), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r1 + 24), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r1 + 25), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r1 + 26), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r1 + 27), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r1 + 28), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r1 + 29), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r1 + 30), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r1 + 31), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r1 + 32), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r1 + 33), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r1 + 34), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r1 + 35), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r1 + 36), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r1 + 37), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r1 + 38), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r1 + 39), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007A gpr_write=0xC0001FF3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020BAE4 func_8020BAE4 preserves=true fpr_mask=0x00000000
