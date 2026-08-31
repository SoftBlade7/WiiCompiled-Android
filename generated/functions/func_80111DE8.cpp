#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80111DE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80111DE8;

loc_80111DE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
}

loc_80111DFC:
{
    r0 = MemoryInline::FlatRead32((r31 + 404));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111E04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80111E14;
    }
}

loc_80111E08:
{
    r0 = MemoryInline::FlatRead32((r31 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80111E10:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111E98;
    }
}

loc_80111E14:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    r5 = (r1 + 12);
    r6 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x80111E28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F1524u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80111E2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80111E44;
    }
}

loc_80111E30:
{
}

loc_80111E34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80111E7C;
    }
}

loc_80111E38:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80111E40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80111E7C;
    }
}

loc_80111E44:
{
    r4 = 1;
    r0 = 5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80111E50:
{
    MemoryInline::FlatWrite32((r31 + 288), r4);
    MemoryInline::FlatWrite32((r31 + 60), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111E6C;
    }
}

loc_80111E5C:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    // inline leaf 0x800F151C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26796));
    // end of inlined leaf 0x800F151C
    MemoryInline::FlatWrite32((r31 + 80), r3);
    goto loc_80111E74;
}

loc_80111E6C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 80), r0);
}

loc_80111E74:
{
    r3 = 0;
    goto loc_80111EF8;
}

loc_80111E7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80111E80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80111E90;
    }
}

loc_80111E84:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80111E8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80111E98;
    }
}

loc_80111E90:
{
    r3 = 1;
    goto loc_80111EF8;
}

loc_80111E98:
{
    r5 = MemoryInline::FlatRead32((r31 + 100));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 88));
    r0 = MemoryInline::FlatRead32((r31 + 96));
    r4 = (r4 + r5);
    r5 = (r0 - r5);
    ctx->lr = 0x80111EB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80112348u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80111EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80111ECC;
    }
}

loc_80111EBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80111EDC;
    }
}

loc_80111EC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_80111EC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80111ED4;
    }
}

loc_80111EC8:
{
    goto loc_80111EDC;
}

loc_80111ECC:
{
    r3 = 0;
    goto loc_80111EF8;
}

loc_80111ED4:
{
    r3 = 1;
    goto loc_80111EF8;
}

loc_80111EDC:
{
    r4 = MemoryInline::FlatRead32((r31 + 100));
    r0 = MemoryInline::FlatRead32((r31 + 96));
    r3 = (r4 + r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_80111EEC:
{
    MemoryInline::FlatWrite32((r31 + 100), r3);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80111DFC;
    }
}

loc_80111EF4:
{
    r3 = 1;
}

loc_80111EF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80111DE8 func_80111DE8 preserves=true fpr_mask=0x00000000
