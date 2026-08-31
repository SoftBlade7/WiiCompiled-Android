#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80102ED8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80102ED8;

loc_80102ED8:
{
    r4 = MemoryInline::FlatRead8(r5);
    r0 = 0;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80102EF0;
    }
}

loc_80102EE8:
{
}

loc_80102EEC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(256))) {
        goto loc_80102EF4;
    }
}

loc_80102EF0:
{
    r0 = 1;
}

loc_80102EF4:
{
}

loc_80102EF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80102F00;
    }
}

loc_80102EFC:
{
    goto loc_80102F14;
}

loc_80102F00:
{
    r3 = 0x80270000u;
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_1 = (r3 + r4);
    r4 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_80102F14:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(77));
}

loc_80102F1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80102F30;
    }
}

loc_80102F20:
{
    r3 = (r1 + 56);
    r4 = (r13 + -30908);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80102F54;
}

loc_80102F30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(70));
}

loc_80102F34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80102F48;
    }
}

loc_80102F38:
{
    r3 = (r1 + 56);
    r4 = (r13 + -30904);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80102F54;
}

loc_80102F48:
{
    r3 = (r1 + 56);
    r4 = (r13 + -30900);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80013120u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80102F54:
{
    r29 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r5 = (r13 + -31024);
    r4 = (r29 + 1504);
    ctx->lr = 0x80102F68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FF014u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80102F6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80102F74;
    }
}

loc_80102F70:
{
    goto loc_80102F98;
}

loc_80102F74:
{
    r3 = r31;
    r4 = (r29 + 1504);
    r5 = (r1 + 56);
    ctx->lr = 0x80102F84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800FF014u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80102F88:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80102F94;
    }
}

loc_80102F90:
{
    r0 = r3;
}

loc_80102F94:
{
    r3 = r0;
}

loc_80102F98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80102F9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80103510;
    }
}

loc_80102FA0:
{
    goto loc_80103514;
}

loc_80103510:
{
    r3 = 0;
}

loc_80103514:
{
    r0 = MemoryInline::FlatRead32((r1 + 340));
    r31 = MemoryInline::FlatRead32((r1 + 332));
    r30 = MemoryInline::FlatRead32((r1 + 328));
    r29 = MemoryInline::FlatRead32((r1 + 324));
    r28 = MemoryInline::FlatRead32((r1 + 320));
    ctx->lr = r0;
    r1 = (r1 + 336);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFE0019FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80102ED8 func_80102ED8 preserves=true fpr_mask=0x00000000
