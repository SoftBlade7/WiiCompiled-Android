#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801240B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801240B0;

loc_801240B0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r0 = MemoryInline::FlatRead32((r13 + -26552));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801240D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80124214;
    }
}

loc_801240D8:
{
    r3 = MemoryInline::FlatRead32((r13 + -29720));
    ctx->lr = 0x801240E0u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0504u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x80000000u;
    r4 = 1125908480;
    r0 = MemoryInline::FlatRead32((r3 + 248));
    r7 = 0;
    r5 = 274857984;
    r4 = (r4 + -8573);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r6 = (r6_rot_1 & 1073741823);
    r3 = 65536;
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r4) * static_cast<uint64_t>(r6)) >> 32));
    r9 = (r5 + 19923);
    r0 = (r3 + -23512);
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -26544), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r13 + -26512), r7);
    r4 = (r3 + -23536);
    r3 = (r3 + -2536);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(17));
    r10 = (r10_rot_1 & 131071);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r13 + -26520), r7);
    r6 = (r10 * r0);
    r30 = -855638016;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r13 + -26528), r7);
    r0 = -22;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r13 + -26536), r7);
    r5 = (r10 * r4);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r13 + -26544), r7);
    r4 = (r10 * r3);
    r8 = (r10 * 31524);
    r3 = (r10 * 3000);
    r8 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r8)) >> 32));
    r6 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r6)) >> 32));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(23));
    r8 = (r8_rot_1 & 8388607);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r13 + -26508), r8);
    r5 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r5)) >> 32));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(23));
    r6 = (r6_rot_2 & 8388607);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r13 + -26516), r6);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r4)) >> 32));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(23));
    r5 = (r5_rot_1 & 8388607);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r13 + -26524), r5);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r9) * static_cast<uint64_t>(r3)) >> 32));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r4 = (r4_rot_1 & 8388607);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r13 + -26532), r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(23));
    r3 = (r3_rot_1 & 8388607);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r13 + -26540), r3);
    r3 = MemoryInline::FlatRead32((r30 + 27648));
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r30 + 27648), r0);
    MemoryInline::FlatWrite32((r30 + 27652), r7);
    MemoryInline::FlatWrite32((r30 + 27660), r7);
    r0 = MemoryInline::FlatRead32((r30 + 27648));
    r0 = (r0 & -33);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32((r30 + 27648), r0);
    r0 = MemoryInline::FlatRead32((r30 + 27648));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 ^ 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801241B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801241E8;
    }
}

loc_801241BC:
{
    r0 = MemoryInline::FlatRead32((r30 + 27648));
    r0 = (r0 & -65);
    MemoryInline::FlatWrite32((r30 + 27648), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r29 = r3;
    ctx->lr = 0x801241D4u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8012433Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r30 + 27648));
    r3 = r29;
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r30 + 27648), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801241E8:
{
    r0 = 0;
    r4 = 0x80120000u;
    MemoryInline::FlatWrite32((r13 + -26496), r0);
    r4 = (r4 + 16944);
    r3 = 5;
    MemoryInline::FlatWrite32((r13 + -26500), r31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A65F8u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 67108864;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A69BCu>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -26552), r0);
}

loc_80124214:
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801240B0 func_801240B0 preserves=true fpr_mask=0x00000000
