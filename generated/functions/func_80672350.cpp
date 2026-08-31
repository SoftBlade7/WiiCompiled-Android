#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80672350(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_80672350;

loc_80672350:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r27);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r0 = MemoryInline::FlatRead32((r3 + 16884));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8067237C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80672390;
    }
}

loc_80672380:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = 0;
    goto loc_8067248C;
}

loc_80672390:
{
    r3 = MemoryInline::FlatRead32((r3 + 30076));
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl0_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl0_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8023320C;
    }
}

loc_inl0_0x80233204:
{
}

loc_inl0_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl0_0x80233214;
    }
}

loc_inl0_0x8023320C:
{
    r3 = 1;
    goto loc_inl0_cont_802331F8;
}

loc_inl0_0x80233214:
{
    r3 = 0;
}

loc_inl0_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8067239C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806723B0;
    }
}

loc_806723A0:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r3 = 0;
    goto loc_8067248C;
}

loc_806723B0:
{
    r3 = MemoryInline::FlatRead32((r31 + 30080));
}

loc_806723B8:
{
    r5 = MemoryInline::FlatRead32((r31 + 30084));
    r4 = 0;
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 16900), r5);
    MemoryInline::FlatWrite32((r31 + 16896), r3);
    MemoryInline::FlatWrite32((r31 + 16904), r27);
    MemoryInline::FlatWrite32((r31 + 16908), r28);
    MemoryInline::FlatWrite32((r31 + 16912), r4);
    MemoryInline::FlatWrite32((r31 + 16928), r29);
    MemoryInline::FlatWrite32((r31 + 16916), r0);
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(4))) {
        goto loc_8067242C;
    }
}

loc_806723E4:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806723F4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80672410;
    }
}

loc_806723F8:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
}

loc_80672410:
{
    r3 = (r4 + 22);
    r4 = (r1 + 8);
    ctx->lr = 0x8067241Cu;
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
    InvokeDirectCpu<0x800C75F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80672420:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8067242C;
    }
}

loc_80672424:
{
    r0 = MemoryInline::FlatRead16((r1 + 8));
    MemoryInline::FlatWrite32((r31 + 16916), r0);
}

loc_8067242C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80672430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672448;
    }
}

loc_80672434:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWrite32((r31 + 16920), r3);
    MemoryInline::FlatWrite32((r31 + 16924), r0);
    goto loc_80672450;
}

loc_80672448:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 16920), r0);
}

loc_80672450:
{
    r7 = 0;
    r6 = 1;
    r0 = 21;
    r4 = 0x80670000u;
    MemoryInline::FlatWrite32((r31 + 16), r6);
    r5 = r31;
    r3 = MemoryInline::FlatRead32((r31 + 44));
    r4 = (r4 + 7292);
    MemoryInline::FlatWrite32((r31 + 20), r7);
    r6 = 0;
    MemoryInline::FlatWrite32((r31 + 30072), r0);
    MemoryInline::FlatWrite8((r31 + 40), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite32((r31 + 24), r7);
    ctx->lr = 0x80672488u;
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
    InvokeDirectCpu<0x80242C18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
}

loc_8067248C:
{
    r27 = MemoryInline::FlatRead32((r1 + 28));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80672350 func_80672350 preserves=true fpr_mask=0x00000000
