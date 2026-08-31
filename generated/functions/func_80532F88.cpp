#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80532F88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80532F88;

loc_80532F88:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 32), r5);
    MemoryInline::FlatWrite8((r3 + 48), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_80532FCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80532FEC;
    }
}

loc_80532FD0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    // inline leaf 0x80518B78 (14 guest instruction(s))
}

loc_inl0_0x80518B78:
{
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_inl0_0x80518B80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80518BA8;
    }
}

loc_inl0_0x80518B84:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80518B8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80518BA8;
    }
}

loc_inl0_0x80518B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80518BA0;
    }
}

loc_inl0_0x80518B94:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_80518B78;
}

loc_inl0_0x80518BA0:
{
    r3 = 0;
    goto loc_inl0_cont_80518B78;
}

loc_inl0_0x80518BA8:
{
    r3 = 0;
}

loc_inl0_cont_80518B78:
{
    // end of inlined leaf 0x80518B78
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80532FE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053300C;
    }
}

loc_80532FEC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 4);
}

loc_80532FFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80533014;
    }
}

loc_80533000:
{
    r0 = MemoryInline::FlatRead8((r3 + 2957));
}

loc_80533008:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80533014;
    }
}

loc_8053300C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 48), static_cast<uint8_t>(r0));
}

loc_80533014:
{
    r0 = 0x80000000u;
    MemoryInline::FlatWrite32((r31 + 56), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10484));
    // inline leaf 0x80524568 (6 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 232), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 468), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 704), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 940), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80524568
    r29 = 0;
    r30 = 0x809C0000u;
    goto loc_80533048;
}

loc_80533034:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctx->lr = 0x80533044u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80534194u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r29 + 1);
}

loc_80533048:
{
    r3 = MemoryInline::FlatRead32((r30 + -10456));
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80533058:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80533034;
    }
}

loc_8053305C:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80533070u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80532F88 func_80532F88 preserves=true fpr_mask=0x00000000
