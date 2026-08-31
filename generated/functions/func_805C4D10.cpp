#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C4D10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805C4D10;

loc_805C4D10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 124));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805C4D30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C4E68;
    }
}

loc_805C4D34:
{
    r31 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805C4D44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C4E68;
    }
}

loc_805C4D48:
{
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_805C4D54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805C4D74;
    }
}

loc_805C4D58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_805C4D5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C4D90;
    }
}

loc_805C4D60:
{
}

loc_805C4D64:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_805C4DCC;
    }
}

loc_805C4D68:
{
}

loc_805C4D6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_805C4DD8;
    }
}

loc_805C4D70:
{
    goto loc_805C4DE4;
}

loc_805C4D74:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl2_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl2_0x80621418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl2_0x80621424:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_80621410;
}

loc_inl2_return:
{
}

loc_inl2_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 124), r0);
    goto loc_805C4DEC;
}

loc_805C4D90:
{
    r3 = MemoryInline::FlatRead32((r31 + 8516));
    r4 = (r1 + 8);
    ctx->lr = 0x805C4D9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8066BDDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805C4DA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805C4DC0;
    }
}

loc_805C4DA4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621410 (9 guest instruction(s))
}

loc_inl3_0x80621410:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
}

loc_inl3_0x80621418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8062141C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl3_0x80621424:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80621428:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_80621410;
}

loc_inl3_return:
{
}

loc_inl3_cont_80621410:
{
    // end of inlined leaf 0x80621410
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 124), r0);
    goto loc_805C4DEC;
}

loc_805C4DC0:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 124), r0);
    goto loc_805C4DEC;
}

loc_805C4DCC:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 124), r0);
    goto loc_805C4DEC;
}

loc_805C4DD8:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 124), r0);
    goto loc_805C4DEC;
}

loc_805C4DE4:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 124), r0);
}

loc_805C4DEC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805C4E00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805C4E0C;
    }
}

loc_805C4E04:
{
    r30 = 0;
    goto loc_805C4E60;
}

loc_805C4E0C:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C4E5C;
    }
}

loc_805C4E18:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x805C4E2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805C4E44;
}

loc_805C4E30:
{
}

loc_805C4E34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_805C4E40;
    }
}

loc_805C4E38:
{
    r0 = 1;
    goto loc_805C4E50;
}

loc_805C4E40:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_805C4E44:
{
}

loc_805C4E48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805C4E30;
    }
}

loc_805C4E4C:
{
    r0 = 0;
}

loc_805C4E50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805C4E54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C4E5C;
    }
}

loc_805C4E58:
{
    goto loc_805C4E60;
}

loc_805C4E5C:
{
    r30 = 0;
}

loc_805C4E60:
{
    r3 = r30;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
}

loc_805C4E68:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805C4D10 func_805C4D10 preserves=true fpr_mask=0x00000000
