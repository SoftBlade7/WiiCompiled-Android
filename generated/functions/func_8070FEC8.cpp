#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070FEC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8070FEC8;

loc_8070FEC8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r28 + 10232));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807117A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r28 + 10232));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8071172Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r28 + 10232));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80711668u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_8070FF14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070FF24;
    }
}

loc_8070FF18:
{
}

loc_8070FF1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8070FF98;
    }
}

loc_8070FF20:
{
    goto loc_8071000C;
}

loc_8070FF24:
{
}

loc_8070FF28:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8070FF64;
    }
}

loc_8070FF2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8070FF30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FF58;
    }
}

loc_8070FF34:
{
    r0 = MemoryInline::FlatRead8((r29 + 21));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070FF3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FF4C;
    }
}

loc_8070FF40:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FF4C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FF58:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FF64:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8070FF68:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FF78;
    }
}

loc_8070FF6C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FF78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070FF7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FF8C;
    }
}

loc_8070FF80:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FF8C:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FF98:
{
}

loc_8070FF9C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8070FFD8;
    }
}

loc_8070FFA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8070FFA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FFCC;
    }
}

loc_8070FFA8:
{
    r0 = MemoryInline::FlatRead8((r29 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070FFB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FFC0;
    }
}

loc_8070FFB4:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FFC0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FFCC:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FFD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8070FFDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FFEC;
    }
}

loc_8070FFE0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8070FFEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070FFF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80710000;
    }
}

loc_8070FFF4:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_80710000:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_8071000C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80710010:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80710020;
    }
}

loc_80710014:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_80710020:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80710024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80710034;
    }
}

loc_80710028:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_80710034:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80710038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80710048;
    }
}

loc_8071003C:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r29 + 16), r0);
    goto loc_80710050;
}

loc_80710048:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 16), r0);
}

loc_80710050:
{
    MemoryInline::FlatWrite8((r29 + 20), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 21), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 22), static_cast<uint8_t>(r3));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000007B gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070FEC8 func_8070FEC8 preserves=true fpr_mask=0x00000000
