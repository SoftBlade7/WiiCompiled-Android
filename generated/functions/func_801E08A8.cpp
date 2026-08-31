#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E08A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r12_addr_0 = 0;
    uint32_t r12_addr_1 = 0;
    uint32_t r12_addr_2 = 0;
    uint32_t r12_addr_3 = 0;
    uint32_t r12_addr_4 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801E08A8;

loc_801E08A8:
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
    r11 = (r4 + 2);
    r0 = 3;
    r11 = PPC_Divwu(static_cast<uint32_t>(r11), static_cast<uint32_t>(r0));
    r10 = 0;
    r0 = 0;
    r9 = 0;
    ctr = r11;
}

loc_801E08DC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_801E09A4;
    }
}

loc_801E08E0:
{
    r11 = (r9 + 3);
}

loc_801E08E8:
{
    if ((static_cast<int32_t>(r11) < static_cast<int32_t>(r7))) {
        goto loc_801E08F4;
    }
}

loc_801E08EC:
{
    r0 = -8;
    goto loc_801E09A4;
}

loc_801E08F4:
{
    r11 = (r10 + 1);
    r3_addr_2 = (r3 + r10);
    r12 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_801E0900:
{
    r31 = (r3 + r10);
    r29 = 0;
    r28 = 0;
    r27_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(8));
    r27 = (r27_rot_2 & -256);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(r4))) {
        goto loc_801E0920;
    }
}

loc_801E0914:
{
    r11 = MemoryInline::FlatRead8((r31 + 1));
    r28 = 1;
    r27 = (r27 | r11);
}

loc_801E0920:
{
    r11 = (r10 + 2);
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(8));
    r27 = (r27_rot_3 & -256);
}

loc_801E092C:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(r4))) {
        goto loc_801E093C;
    }
}

loc_801E0930:
{
    r11 = MemoryInline::FlatRead8((r31 + 2));
    r29 = 1;
    r27 = (r27 | r11);
}

loc_801E093C:
{
    r31 = MemoryInline::FlatRead32((r13 + -28224));
    r11_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(14));
    r11 = (r11_rot_2 & 63);
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(20));
    r12 = (r12_rot_2 & 63);
    r30 = (r6 + r9);
    r31_addr_2 = (r31 + r11);
    r31 = MemoryInline::FlatRead8(r31_addr_2);
}

loc_801E0954:
{
    r11 = 64;
    r6_addr_2 = (r6 + r9);
    MemoryInline::FlatWrite8(r6_addr_2, static_cast<uint8_t>(r31));
    r31 = MemoryInline::FlatRead32((r13 + -28224));
    r31_addr_3 = (r31 + r12);
    r12 = MemoryInline::FlatRead8(r31_addr_3);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r12));
    r12 = MemoryInline::FlatRead32((r13 + -28224));
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_801E0974;
    }
}

loc_801E0970:
{
    r11_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(26));
    r11 = (r11_rot_3 & 63);
}

loc_801E0974:
{
    r12_addr_2 = (r12 + r11);
    r12 = MemoryInline::FlatRead8(r12_addr_2);
}

loc_801E097C:
{
    r11 = 64;
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r12));
    r12 = MemoryInline::FlatRead32((r13 + -28224));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_801E0990;
    }
}

loc_801E098C:
{
    r11 = (r27 & 63);
}

loc_801E0990:
{
    r12_addr_3 = (r12 + r11);
    r11 = MemoryInline::FlatRead8(r12_addr_3);
    r9 = (r9 + 4);
    r10 = (r10 + 3);
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r11));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801E08E0;
    }
}

loc_801E09A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801E09A8:
{
    MemoryInline::FlatWrite32(r8, r9);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E09C0;
    }
}

loc_801E09B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r10));
}

loc_801E09B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E09BC;
    }
}

loc_801E09B8:
{
    r10 = r4;
}

loc_801E09BC:
{
    MemoryInline::FlatWrite32(r5, r10);
}

loc_801E09C0:
{
    r11 = (r1 + 32);
    r3 = r0;
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
    ctx->gpr[3] = r3;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF8003FFB gpr_write=0xF8001E0B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E08A8 func_801E08A8 preserves=true fpr_mask=0x00000000
