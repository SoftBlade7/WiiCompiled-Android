#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80733E24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_80733E24;

loc_80733E24:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r4 = MemoryInline::FlatRead32((r3 + 408));
    r3 = MemoryInline::FlatRead32(r4);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r4 = MemoryInline::FlatRead32((r4 + 13848));
    r30 = (r0 * 584);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 20));
    r4 = (r0 + r30);
    r0 = MemoryInline::FlatRead32((r4 + 200));
}

loc_80733E70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_80733E84;
    }
}

loc_80733E74:
{
    r0 = MemoryInline::FlatRead8((r4 + 520));
}

loc_80733E7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80733E84;
    }
}

loc_80733E80:
{
    r3 = 1;
}

loc_80733E84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80733E88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80733E9C;
    }
}

loc_80733E8C:
{
    r3 = r31;
    r4 = (r31 + 100);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_8073403C;
}

loc_80733E9C:
{
    r3 = MemoryInline::FlatRead32((r31 + 408));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 140));
}

loc_80733EC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_80733ED8;
    }
}

loc_80733ECC:
{
    r29 = r0;
    r0 = 1;
    goto loc_80733EDC;
}

loc_80733ED8:
{
    r0 = 0;
}

loc_80733EDC:
{
}

loc_80733EE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80733FF0;
    }
}

loc_80733EE4:
{
    r0 = (r29 + -16);
    r3 = 0;
}

loc_80733EF0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80733EF8;
    }
}

loc_80733EF4:
{
    r3 = 1;
}

loc_80733EF8:
{
}

loc_80733EFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80733F54;
    }
}

loc_80733F00:
{
    r3 = MemoryInline::FlatRead32((r31 + 412));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80733F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80733F20;
    }
}

loc_80733F0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80733F10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80733F3C;
    }
}

loc_80733F14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80733F18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80733F48;
    }
}

loc_80733F1C:
{
    goto loc_8073403C;
}

loc_80733F20:
{
    r3 = MemoryInline::FlatRead32((r31 + 408));
    r4 = 4;
    // inline leaf 0x8073199C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8073199C
    r3 = MemoryInline::FlatRead32((r31 + 412));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 412), r0);
    goto loc_8073403C;
}

loc_80733F3C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 412), r0);
    goto loc_8073403C;
}

loc_80733F48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 412), r0);
    goto loc_8073403C;
}

loc_80733F54:
{
    r0 = (r29 + -4);
    r3 = 0;
}

loc_80733F60:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80733F6C;
    }
}

loc_80733F64:
{
}

loc_80733F68:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(10))) {
        goto loc_80733F70;
    }
}

loc_80733F6C:
{
    r3 = 1;
}

loc_80733F70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80733F74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80733F88;
    }
}

loc_80733F78:
{
    r3 = r31;
    r4 = (r31 + 188);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_8073403C;
}

loc_80733F88:
{
}

loc_80733F8C:
{
    r0 = 0;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80733F9C;
    }
}

loc_80733F94:
{
}

loc_80733F98:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(2))) {
        goto loc_80733FA0;
    }
}

loc_80733F9C:
{
    r0 = 1;
}

loc_80733FA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80733FA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80733FE0;
    }
}

loc_80733FA8:
{
    r12 = MemoryInline::FlatRead32((r31 + 52));
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 104));
    ctr = r12;
    ctx->lr = 0x80733FBCu;
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80733FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80733FE0;
    }
}

loc_80733FC4:
{
    r3 = MemoryInline::FlatRead32((r31 + 408));
    r4 = 4;
    // inline leaf 0x8073199C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8073199C
    r3 = r31;
    r4 = (r31 + 320);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_8073403C;
}

loc_80733FE0:
{
    r3 = r31;
    r4 = (r31 + 144);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_8073403C;
}

loc_80733FF0:
{
    r3 = (r3 + r30);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80733FFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073403C;
    }
}

loc_80734000:
{
    r0 = MemoryInline::FlatRead32((r31 + 412));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734018;
    }
}

loc_8073400C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80734010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734034;
    }
}

loc_80734014:
{
    goto loc_8073403C;
}

loc_80734018:
{
    r3 = MemoryInline::FlatRead32((r31 + 408));
    r4 = 4;
    // inline leaf 0x8073199C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8073199C
    r3 = MemoryInline::FlatRead32((r31 + 412));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r31 + 412), r0);
    goto loc_8073403C;
}

loc_80734034:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 412), r0);
}

loc_8073403C:
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
// RECOMP_REGISTRATION base 0x80733E24 func_80733E24 preserves=true fpr_mask=0x00000000
