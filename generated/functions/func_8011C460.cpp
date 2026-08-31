#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011C460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8011C460;

loc_8011C460:
{
    ctr = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8011C468:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8011C46C:
{
    r6 = MemoryInline::FlatRead8((r3 + 256));
    r8 = MemoryInline::FlatRead8((r3 + 257));
    r3_addr_2 = (r3 + r6);
    r5 = MemoryInline::FlatRead8(r3_addr_2);
    r7 = (r6 + 1);
    r0 = MemoryInline::FlatRead8(r4);
    r5 = (r8 + r5);
    r6 = MemoryInline::FlatRead8((r3 + 260));
    MemoryInline::FlatWrite8((r3 + 257), static_cast<uint8_t>(r5));
    r5 = (r5 & 255);
    MemoryInline::FlatWrite8((r3 + 256), static_cast<uint8_t>(r7));
    r3_addr_3 = (r3 + r6);
    r7 = MemoryInline::FlatRead8(r3_addr_3);
    r3_addr_4 = (r3 + r5);
    r5 = MemoryInline::FlatRead8(r3_addr_4);
    r3_addr_5 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r5));
    r6 = MemoryInline::FlatRead8((r3 + 259));
    r5 = MemoryInline::FlatRead8((r3 + 257));
    r3_addr_6 = (r3 + r6);
    r6 = MemoryInline::FlatRead8(r3_addr_6);
    r3_addr_7 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead8((r3 + 256));
    r5 = MemoryInline::FlatRead8((r3 + 259));
    r3_addr_8 = (r3 + r6);
    r6 = MemoryInline::FlatRead8(r3_addr_8);
    r3_addr_9 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r6));
    r5 = MemoryInline::FlatRead8((r3 + 256));
    r3_addr_10 = (r3 + r5);
    MemoryInline::FlatWrite8(r3_addr_10, static_cast<uint8_t>(r7));
    r3_addr_11 = (r3 + r7);
    r5 = MemoryInline::FlatRead8(r3_addr_11);
    r6 = MemoryInline::FlatRead8((r3 + 258));
    r7 = MemoryInline::FlatRead8((r3 + 257));
    r5 = (r6 + r5);
    r6 = MemoryInline::FlatRead8((r3 + 259));
    MemoryInline::FlatWrite8((r3 + 258), static_cast<uint8_t>(r5));
    r10 = (r5 & 255);
    r5 = MemoryInline::FlatRead8((r3 + 260));
    r3_addr_12 = (r3 + r7);
    r8 = MemoryInline::FlatRead8(r3_addr_12);
    r3_addr_13 = (r3 + r6);
    r7 = MemoryInline::FlatRead8(r3_addr_13);
    r3_addr_14 = (r3 + r5);
    r6 = MemoryInline::FlatRead8(r3_addr_14);
    r5 = (r8 + r7);
    r9 = MemoryInline::FlatRead8((r3 + 256));
    r5 = (r6 + r5);
    r3_addr_15 = (r3 + r10);
    r8 = MemoryInline::FlatRead8(r3_addr_15);
    r3_addr_16 = (r3 + r9);
    r7 = MemoryInline::FlatRead8(r3_addr_16);
    r5 = (r5 & 255);
    r3_addr_17 = (r3 + r5);
    r5 = MemoryInline::FlatRead8(r3_addr_17);
    r6 = (r8 + r7);
    r6 = (r6 & 255);
    r3_addr_18 = (r3 + r5);
    r5 = MemoryInline::FlatRead8(r3_addr_18);
    r3_addr_19 = (r3 + r6);
    r6 = MemoryInline::FlatRead8(r3_addr_19);
    r6 = (r0 ^ r6);
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r0));
    r5 = (r6 ^ r5);
    MemoryInline::FlatWrite8((r3 + 259), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r5));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8011C46C;
    }
}

loc_8011C53C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011C460 func_8011C460 preserves=true fpr_mask=0x00000000
