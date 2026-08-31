#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011C5B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8011C5B4;

loc_8011C5B4:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 300), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 296), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 292), r29);
    r29 = 0;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    ctx->lr = 0x8011C5E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead8((r31 + 20));
    MemoryInline::FlatWrite32((r31 + 28), r3);
    r0 = (r4 & 32);
}

loc_8011C5F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011C7CC;
    }
}

loc_8011C5F4:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_8011C5FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8011C738;
    }
}

loc_8011C600:
{
    r0 = (r4 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011C604:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011C63C;
    }
}

loc_8011C608:
{
    r4 = 254;
    r6 = 253;
    r0 = 9;
    r3 = (r1 + 24);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r4));
    r4 = (r31 + 28);
    r5 = 4;
    r3 = (r3 + 3);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 7;
    goto loc_8011C774;
}

loc_8011C63C:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    r7 = 254;
    r6 = 253;
    r0 = 0;
    r29 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r29;
    r4 = (r31 + 28);
    r5 = 4;
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r7));
    r3 = (r3 + 3);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r6 = 7;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011C684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011C6A0;
    }
}

loc_8011C688:
{
    r3 = r29;
    r4 = (r1 + 8);
    r5 = 4;
    r3 = (r3 + 7);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = 11;
}

loc_8011C6A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 20));
    r0 = (r0 & 4);
}

loc_8011C6A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011C708;
    }
}

loc_8011C6AC:
{
    r0 = MemoryInline::FlatRead32((r30 + 64));
    r3 = (r1 + 24);
    r5 = 0;
    r3_addr_1 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
    r3 = (r3 + r6);
    goto loc_8011C6E0;
}

loc_8011C6C8:
{
    r4 = (r30 + r5);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead8((r4 + 44));
    r6 = (r6 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_8011C6E0:
{
    r0 = MemoryInline::FlatRead32((r30 + 64));
}

loc_8011C6E8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_8011C6C8;
    }
}

loc_8011C6EC:
{
    r3 = (r1 + 24);
    r0 = 0;
    r3_addr_2 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r0));
    r5 = (r6 + 2);
    r6 = (r6 + 1);
    r3_addr_3 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r0));
    goto loc_8011C774;
}

loc_8011C708:
{
    r3 = (r1 + 24);
    r4 = 255;
    r3_addr_4 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_4, static_cast<uint8_t>(r4));
    r6 = (r6 + 1);
    r0 = 1;
    r3_addr_5 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_5, static_cast<uint8_t>(r4));
    r6 = (r6 + 1);
    r5 = (r6 + 2);
    r3_addr_6 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r4));
    r6 = (r6 + 1);
    r3_addr_7 = (r3 + r6);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r0));
    goto loc_8011C774;
}

loc_8011C738:
{
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011C73C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011C75C;
    }
}

loc_8011C740:
{
    r4 = 0x80280000u;
    r3 = (r1 + 24);
    r4 = (r4 + -8768);
    r5 = 13;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 13;
    goto loc_8011C774;
}

loc_8011C75C:
{
    r4 = 0x80280000u;
    r3 = (r1 + 24);
    r4 = (r4 + -8752);
    r5 = 8;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = 8;
}

loc_8011C774:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r30 + 40));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8011C780:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011C7A4;
    }
}

loc_8011C784:
{
    r0 = MemoryInline::FlatRead8((r31 + 21));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011C78C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011C7A4;
    }
}

loc_8011C790:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead16((r31 + 12));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
    goto loc_8011C7B0;
}

loc_8011C7A4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r0 = MemoryInline::FlatRead16((r31 + 4));
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r0));
}

loc_8011C7B0:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r4 = (r1 + 24);
    r7 = (r1 + 16);
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x8011C7C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F13D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = 1;
}

loc_8011C7CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8011C7D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011C810;
    }
}

loc_8011C7D4:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
}

loc_8011C7DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8011C7E4;
    }
}

loc_8011C7E0:
{
    MemoryInline::FlatWrite32((r3 + 36), r31);
}

loc_8011C7E4:
{
    MemoryInline::FlatWrite32((r30 + 12), r31);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011C7F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011C800;
    }
}

loc_8011C7FC:
{
    MemoryInline::FlatWrite32((r30 + 8), r31);
}

loc_8011C800:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 16), r0);
    goto loc_8011C818;
}

loc_8011C810:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 28), r0);
}

loc_8011C818:
{
    r0 = MemoryInline::FlatRead32((r1 + 308));
    r31 = MemoryInline::FlatRead32((r1 + 300));
    r30 = MemoryInline::FlatRead32((r1 + 296));
    r29 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011C5B4 func_8011C5B4 preserves=true fpr_mask=0x00000000
