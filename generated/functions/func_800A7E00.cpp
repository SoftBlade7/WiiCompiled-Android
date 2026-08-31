#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A7E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A7E00;

loc_800A7E00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r6;
    r0 = MemoryInline::FlatRead32((r3 + 260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A7E34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A7E40;
    }
}

loc_800A7E38:
{
    r3 = 0;
    goto loc_800A7EF8;
}

loc_800A7E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 360));
}

loc_800A7E48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A7E54;
    }
}

loc_800A7E4C:
{
    r4 = MemoryInline::FlatRead32((r3 + 364));
    goto loc_800A7E78;
}

loc_800A7E54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800A7E58:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A7E78;
    }
}

loc_800A7E5C:
{
    r7 = MemoryInline::FlatRead32((r3 + 364));
    r6 = 1000;
    r0 = MemoryInline::FlatRead32((r3 + 232));
    r5 = 0;
    r4 = (r7 * r0);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x800216F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800A7E78:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r28, r0);
    r3 = MemoryInline::FlatRead32((r29 + 244));
}

loc_800A7E88:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r3))) {
        goto loc_800A7EC8;
    }
}

loc_800A7E8C:
{
    r0 = MemoryInline::FlatRead8((r29 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800A7E94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A7EC0;
    }
}

loc_800A7E98:
{
    r5 = MemoryInline::FlatRead32((r29 + 240));
    r4 = (r4 - r3);
    r0 = (r3 - r5);
    r3 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    r0 = (r3 * r0);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32(r28, r3);
    r0 = (r4 - r0);
    r4 = (r5 + r0);
    goto loc_800A7EC8;
}

loc_800A7EC0:
{
    r3 = 0;
    goto loc_800A7EF8;
}

loc_800A7EC8:
{
    r0 = MemoryInline::FlatRead32((r29 + 260));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r0));
    MemoryInline::FlatWrite32(r30, r0);
    r0 = MemoryInline::FlatRead32((r29 + 220));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800A7EDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A7EF4;
    }
}

loc_800A7EE0:
{
    r3 = MemoryInline::FlatRead32((r29 + 260));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_800A7EF4:
{
    r3 = 1;
}

loc_800A7EF8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00006FB gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A7E00 func_800A7E00 preserves=true fpr_mask=0x00000000
