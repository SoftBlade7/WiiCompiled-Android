#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079BD94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079BD94;

loc_8079BD94:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r29 = MemoryInline::FlatRead8((r3 + 16));
    r27 = MemoryInline::FlatRead32((r4 + 8016));
    goto loc_8079BE6C;
}

loc_8079BDB8:
{
    r4 = MemoryInline::FlatRead32((r31 + 20));
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r30 = (r30_rot_2 & 1020);
    r3 = r27;
    r4_addr_2 = (r4 + r30);
    r28 = MemoryInline::FlatRead8(r4_addr_2);
    // inline leaf 0x80654810 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8432));
    r3 = MemoryInline::FlatRead32((r3 + 11140));
    // end of inlined leaf 0x80654810
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r4 = (r0 + r30);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8079BDDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8079BDF0;
    }
}

loc_8079BDE0:
{
    r3 = r27;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654758u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8079BDEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079BE28;
    }
}

loc_8079BDF0:
{
    r0 = MemoryInline::FlatRead8((r31 + 16));
    r4 = 0;
    goto loc_8079BE0C;
}

loc_8079BDFC:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r4 = (r4 + 1);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
}

loc_8079BE0C:
{
}

loc_8079BE10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8079BDFC;
    }
}

loc_8079BE14:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_8079BE1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079BE78;
    }
}

loc_8079BE20:
{
    MemoryInline::FlatWrite32((r31 + 28), r4);
    goto loc_8079BE78;
}

loc_8079BE28:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0 = (r29 & 255);
    r5 = MemoryInline::FlatRead8((r31 + 17));
    r4 = (r0 * 36);
    r3_addr_2 = (r3 + r30);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r5));
    r3 = r27;
    r5 = MemoryInline::FlatRead32((r31 + 24));
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWrite8((r31 + 17), static_cast<uint8_t>(r29));
    r6 = (r5 + r4);
    r7 = (r0 + r30);
    MemoryInline::FlatWrite8((r31 + 16), static_cast<uint8_t>(r28));
    r4 = MemoryInline::FlatRead32((r6 + 24));
    r5 = MemoryInline::FlatRead32((r6 + 28));
    r7 = MemoryInline::FlatRead8((r7 + 2));
    ctx->lr = 0x8079BE68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8065474Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = r28;
}

loc_8079BE6C:
{
    r0 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_8079BE74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079BDB8;
    }
}

loc_8079BE78:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF80000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8079BD94 func_8079BD94 preserves=true fpr_mask=0x00000000
