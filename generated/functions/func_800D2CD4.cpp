#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D2CD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800D2CD4;

loc_800D2CD4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D2CE0:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D2D00;
    }
}

loc_800D2CF8:
{
    r3 = 0;
    goto loc_800D2E30;
}

loc_800D2D00:
{
    r4 = 0x80270000u;
    r5 = r29;
    r4 = (r4 + 26892);
    r3 = 2;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D2D18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(3));
}

loc_800D2D1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D2D58;
    }
}

loc_800D2D20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D2D34;
    }
}

loc_800D2D24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(1));
}

loc_800D2D28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D2D40;
    }
}

loc_800D2D2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D2D4C;
    }
}

loc_800D2D30:
{
    goto loc_800D2D6C;
}

loc_800D2D34:
{
}

loc_800D2D38:
{
    if ((static_cast<int32_t>(r29) >= static_cast<int32_t>(5))) {
        goto loc_800D2D6C;
    }
}

loc_800D2D3C:
{
    goto loc_800D2D64;
}

loc_800D2D40:
{
    r30 = 9;
    r31 = -1;
    goto loc_800D2D6C;
}

loc_800D2D4C:
{
    r30 = 9;
    r31 = -2;
    goto loc_800D2D6C;
}

loc_800D2D58:
{
    r30 = 6;
    r31 = -10;
    goto loc_800D2D6C;
}

loc_800D2D64:
{
    r30 = 6;
    r31 = -20;
}

loc_800D2D6C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26896));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800D2D78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D2E18;
    }
}

loc_800D2D7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D2D90;
    }
}

loc_800D2D80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800D2D84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D2DA0;
    }
}

loc_800D2D88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D2DB8;
    }
}

loc_800D2D8C:
{
    goto loc_800D2E18;
}

loc_800D2D90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_800D2D94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D2DF4;
    }
}

loc_800D2D98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D2E18;
    }
}

loc_800D2D9C:
{
    goto loc_800D2E0C;
}

loc_800D2DA0:
{
    r31 = (r31 + -65536);
    r3 = r30;
    r31 = (r31 + 4536);
    r4 = r31;
    ctx->lr = 0x800D2DB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800D0290u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800D2E20;
}

loc_800D2DB8:
{
    r0 = MemoryInline::FlatRead32((r3 + 156));
    r31 = (r31 + -65536);
    r31 = (r31 + 4536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800D2DC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800D2DDC;
    }
}

loc_800D2DCC:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x800D2DD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800D0290u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800D2E20;
}

loc_800D2DDC:
{
    r4 = 0x80270000u;
    r3 = 2;
    r4 = (r4 + 26912);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D2DF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CD068u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800D2E20;
}

loc_800D2DF4:
{
    r31 = (r31 + -65536);
    r3 = r30;
    r31 = (r31 + -15464);
    r4 = r31;
    ctx->lr = 0x800D2E08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800D9510u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800D2E20;
}

loc_800D2E0C:
{
    r31 = (r31 + -65536);
    r31 = (r31 + -5464);
    goto loc_800D2E20;
}

loc_800D2E18:
{
    r31 = (r31 + -65536);
    r31 = (r31 + -25464);
}

loc_800D2E20:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x800D2E2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CE838u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r29;
}

loc_800D2E30:
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
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800D2CD4 func_800D2CD4 preserves=true fpr_mask=0x00000000
