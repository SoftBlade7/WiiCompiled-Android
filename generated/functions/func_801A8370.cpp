#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A8370(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
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

    goto loc_801A8370;

loc_801A8370:
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
}

loc_801A8388:
{
    r27 = r3;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(5))) {
        goto loc_801A839C;
    }
}

loc_801A8390:
{
}

loc_801A8394:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A83A4;
    }
}

loc_801A8398:
{
    goto loc_801A83AC;
}

loc_801A839C:
{
}

loc_801A83A0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(7))) {
        goto loc_801A83AC;
    }
}

loc_801A83A4:
{
    r28 = 0;
    goto loc_801A83B0;
}

loc_801A83AC:
{
    r28 = 1;
}

loc_801A83B0:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A1520u>(ctx);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801A83B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A83C8;
    }
}

loc_801A83BC:
{
    r3 = 1;
    ctx->lr = 0x801A83C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B0124u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r29 = r3;
}

loc_801A83C8:
{
    r30 = MemoryInline::FlatRead32((r13 + -25328));
    r3 = 0;
    r31 = 0;
    goto loc_801A8414;
}

loc_801A83D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801A83DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A83EC;
    }
}

loc_801A83E0:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801A83E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A841C;
    }
}

loc_801A83EC:
{
    r12 = MemoryInline::FlatRead32(r30);
    r4 = r27;
    r3 = 0;
    ctr = r12;
    ctx->lr = 0x801A8400u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    r30 = MemoryInline::FlatRead32((r30 + 8));
    r31 = (r31 | r0);
}

loc_801A8414:
{
}

loc_801A8418:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801A83D8;
    }
}

loc_801A841C:
{
    // inline leaf 0x801A90B4 (4 guest instruction(s))
    r3 = 0x80340000u;
    r3 = (r3 + 29760);
    r3 = MemoryInline::FlatRead32((r3 + 76));
    // end of inlined leaf 0x801A90B4
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
    r31 = (r31 | r0);
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_801A83C8;
    }
}

loc_801A8430:
{
    // inline leaf 0x801A90B4 (4 guest instruction(s))
    r3 = 0x80340000u;
    r3 = (r3 + 29760);
    r3 = MemoryInline::FlatRead32((r3 + 76));
    // end of inlined leaf 0x801A90B4
}

loc_801A8438:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801A8430;
    }
}

loc_801A843C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r31 = MemoryInline::FlatRead32((r13 + -25328));
    r3 = 0;
    r30 = 0;
    goto loc_801A848C;
}

loc_801A8450:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801A8454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A8464;
    }
}

loc_801A8458:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801A8460:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A8494;
    }
}

loc_801A8464:
{
    r12 = MemoryInline::FlatRead32(r31);
    r4 = r27;
    r3 = 1;
    ctr = r12;
    ctx->lr = 0x801A8478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_6 & 134217727);
    r31 = MemoryInline::FlatRead32((r31 + 8));
    r30 = (r30 | r0);
}

loc_801A848C:
{
}

loc_801A8490:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_801A8450;
    }
}

loc_801A8494:
{
    // inline leaf 0x801A90B4 (4 guest instruction(s))
    r3 = 0x80340000u;
    r3 = (r3 + 29760);
    r3 = MemoryInline::FlatRead32((r3 + 76));
    // end of inlined leaf 0x801A90B4
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A186Cu>(ctx);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_801A84A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A84AC;
    }
}

loc_801A84A4:
{
    r3 = r29;
    ctx->lr = 0x801A84ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B0124u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_801A84AC:
{
    r3 = 0x80000000u;
    r3 = MemoryInline::FlatRead32((r3 + 220));
    goto loc_801A84E0;
}

loc_801A84B8:
{
    r0 = MemoryInline::FlatRead16((r3 + 712));
    r30 = MemoryInline::FlatRead32((r3 + 764));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801A84C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A84D8;
    }
}

loc_801A84C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A84DC;
    }
}

loc_801A84CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801A84D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A84D8;
    }
}

loc_801A84D4:
{
    goto loc_801A84DC;
}

loc_801A84D8:
{
    ctx->lr = 0x801A84DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AA1D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801A84DC:
{
    r3 = r30;
}

loc_801A84E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A84E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A84B8;
    }
}

loc_801A84E8:
{
    r11 = (r1 + 32);
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
    ctx->gpr[4] = r4;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801A8370 func_801A8370 preserves=true fpr_mask=0x00000000
