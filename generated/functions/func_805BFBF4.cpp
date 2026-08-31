#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805BFBF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805BFBF4;

loc_805BFBF4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    r29 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r29 + 8516));
    // inline leaf 0x8066C17C (3 guest instruction(s))
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -30288));
    // end of inlined leaf 0x8066C17C
    MemoryInline::FlatWrite8((r30 + 596), static_cast<uint8_t>(r3));
    r4 = 0x809C0000u;
    r3 = 0x809C0000u;
    r31 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1216));
    MemoryInline::FlatWrite8((r30 + 597), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 8516));
    // inline leaf 0x8066CB30 (7 guest instruction(s))
}

loc_inl1_0x8066CB30:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
}

loc_inl1_0x8066CB38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_inl1_0x8066CB44;
    }
}

loc_inl1_0x8066CB3C:
{
    r3 = (r3 + 30096);
    goto loc_inl1_cont_8066CB30;
}

loc_inl1_0x8066CB44:
{
    r3 = 0;
}

loc_inl1_cont_8066CB30:
{
    // end of inlined leaf 0x8066CB30
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805BFC54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BFC70;
    }
}

loc_805BFC58:
{
    r3 = MemoryInline::FlatRead32((r29 + 8516));
    // inline leaf 0x8066CB30 (7 guest instruction(s))
}

loc_inl2_0x8066CB30:
{
    r0 = MemoryInline::FlatRead32((r3 + 16884));
}

loc_inl2_0x8066CB38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_inl2_0x8066CB44;
    }
}

loc_inl2_0x8066CB3C:
{
    r3 = (r3 + 30096);
    goto loc_inl2_cont_8066CB30;
}

loc_inl2_0x8066CB44:
{
    r3 = 0;
}

loc_inl2_cont_8066CB30:
{
    // end of inlined leaf 0x8066CB30
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BFC68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805BFC70;
    }
}

loc_805BFC6C:
{
    r31 = 1;
}

loc_805BFC70:
{
    MemoryInline::FlatWrite8((r30 + 598), static_cast<uint8_t>(r31));
    r31 = 0;
    r3 = 0x809C0000u;
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    ctx->lr = 0x805BFC90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C8D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805BFC94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_805BFCA8;
    }
}

loc_805BFC98:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
}

loc_805BFCA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_805BFCA8;
    }
}

loc_805BFCA4:
{
    r31 = 1;
}

loc_805BFCA8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 599), static_cast<uint8_t>(r31));
    r3 = 0x809C0000u;
    MemoryInline::FlatWrite8((r30 + 600), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r31 = MemoryInline::FlatRead32((r3 + 664));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805BFCC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BFCD4;
    }
}

loc_805BFCCC:
{
    r31 = 0;
    goto loc_805BFD28;
}

loc_805BFCD4:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 7040);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BFD24;
    }
}

loc_805BFCE0:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805BFCF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805BFD0C;
}

loc_805BFCF8:
{
}

loc_805BFCFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_805BFD08;
    }
}

loc_805BFD00:
{
    r0 = 1;
    goto loc_805BFD18;
}

loc_805BFD08:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805BFD0C:
{
}

loc_805BFD10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805BFCF8;
    }
}

loc_805BFD14:
{
    r0 = 0;
}

loc_805BFD18:
{
}

loc_805BFD1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805BFD24;
    }
}

loc_805BFD20:
{
    goto loc_805BFD28;
}

loc_805BFD24:
{
    r31 = 0;
}

loc_805BFD28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805BFD2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BFD3C;
    }
}

loc_805BFD30:
{
    r0 = MemoryInline::FlatRead8((r31 + 3224));
    MemoryInline::FlatWrite8((r30 + 601), static_cast<uint8_t>(r0));
    goto loc_805BFD44;
}

loc_805BFD3C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 601), static_cast<uint8_t>(r0));
}

loc_805BFD44:
{
    r29 = 0;
    r31 = 0x809C0000u;
}

loc_805BFD4C:
{
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    r4 = r29;
    ctx->lr = 0x805BFD58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066C528u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805BFD5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805BFD6C;
    }
}

loc_805BFD60:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 602), static_cast<uint8_t>(r0));
    goto loc_805BFD78;
}

loc_805BFD6C:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(32));
}

loc_805BFD74:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805BFD4C;
    }
}

loc_805BFD78:
{
    r3 = 0x809C0000u;
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10528));
    r31 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 104));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    MemoryInline::FlatWrite8((r30 + 603), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + -10424));
    r3 = (r3 + 131072);
    r3 = MemoryInline::FlatRead32((r3 + 20476));
    r3 = (r3 + 131072);
    r0 = MemoryInline::FlatRead32((r3 + 13068));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 ^ 1);
    MemoryInline::FlatWrite8((r30 + 604), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + -10424));
    r4 = (r3 + 131072);
    r4 = MemoryInline::FlatRead32((r4 + 20476));
    r4 = (r4 + 131072);
    r0 = MemoryInline::FlatRead32((r4 + 13068));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805BFDD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805BFDEC;
    }
}

loc_805BFDD8:
{
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054A9E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805BFDE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805BFDEC;
    }
}

loc_805BFDE8:
{
    r31 = 1;
}

loc_805BFDEC:
{
    MemoryInline::FlatWrite8((r30 + 605), static_cast<uint8_t>(r31));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x805BFDFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80668FE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r30 + 606), static_cast<uint8_t>(r3));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805BFBF4 func_805BFBF4 preserves=true fpr_mask=0x00000000
