#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80672B3C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80672B3C;

loc_80672B3C:
{
    MemoryInline::FlatWriteRam32((r1 + -256), r1);
    r1 = (r1 + -256);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    MemoryInline::FlatWriteRam32((r1 + 252), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 248), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 244), r29);
    r29 = r4;
    // inline leaf 0x801D2724 (3 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + 12176);
    // end of inlined leaf 0x801D2724
    r5 = 0x808A0000u;
    r4 = r3;
    r3 = (r1 + 32);
    r6 = 20;
    r5 = (r5 + -22136);
    ctx->lr = 0x80672B7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2ACCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r30;
    r5 = r31;
    r3 = (r1 + 32);
    ctx->lr = 0x80672B8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2D08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 32);
    r4 = (r1 + 8);
    ctx->lr = 0x80672B98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801D2D18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 2;
    r4 = (r1 + 8);
    r5 = 0;
    ctr = r0;
}

loc_80672BA8:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8(r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672BB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672BC0;
    }
}

loc_80672BB8:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672BC0:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672BCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672BD8;
    }
}

loc_80672BD0:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672BD8:
{
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672BE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672BF0;
    }
}

loc_80672BE8:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672BF0:
{
    r3 = MemoryInline::FlatRead8((r4 + 3));
    r0 = MemoryInline::FlatRead8((r29 + 3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672BFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672C08;
    }
}

loc_80672C00:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672C08:
{
    r3 = MemoryInline::FlatRead8((r4 + 4));
    r0 = MemoryInline::FlatRead8((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672C14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672C20;
    }
}

loc_80672C18:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672C20:
{
    r3 = MemoryInline::FlatRead8((r4 + 5));
    r0 = MemoryInline::FlatRead8((r29 + 5));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672C2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672C38;
    }
}

loc_80672C30:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672C38:
{
    r3 = MemoryInline::FlatRead8((r4 + 6));
    r0 = MemoryInline::FlatRead8((r29 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672C50;
    }
}

loc_80672C48:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672C50:
{
    r3 = MemoryInline::FlatRead8((r4 + 7));
    r0 = MemoryInline::FlatRead8((r29 + 7));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672C5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672C68;
    }
}

loc_80672C60:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672C68:
{
    r3 = MemoryInline::FlatRead8((r4 + 8));
    r0 = MemoryInline::FlatRead8((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672C74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672C80;
    }
}

loc_80672C78:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672C80:
{
    r3 = MemoryInline::FlatRead8((r4 + 9));
    r0 = MemoryInline::FlatRead8((r29 + 9));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80672C8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80672C98;
    }
}

loc_80672C90:
{
    r3 = 0;
    goto loc_80672CAC;
}

loc_80672C98:
{
    r4 = (r4 + 10);
    r5 = (r5 + 9);
    r29 = (r29 + 10);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80672BA8;
    }
}

loc_80672CA8:
{
    r3 = 1;
}

loc_80672CAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 260));
    r31 = MemoryInline::FlatRead32((r1 + 252));
    r30 = MemoryInline::FlatRead32((r1 + 248));
    r29 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 256);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80672B3C func_80672B3C preserves=true fpr_mask=0x00000000
