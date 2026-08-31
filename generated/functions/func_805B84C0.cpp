#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B84C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805B84C0;

loc_805B84C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0;
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWrite32((r3 + 144), r0);
    ctr = r0;
}

loc_805B84F4:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_805B84FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8508;
    }
}

loc_805B8500:
{
    r0 = (r5 + 1);
    r5 = (r0 & 65535);
}

loc_805B8508:
{
    r0 = MemoryInline::FlatRead16((r4 + 24));
}

loc_805B8510:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B851C;
    }
}

loc_805B8514:
{
    r0 = (r5 + 1);
    r5 = (r0 & 65535);
}

loc_805B851C:
{
    r0 = MemoryInline::FlatRead16((r4 + 48));
}

loc_805B8524:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8530;
    }
}

loc_805B8528:
{
    r0 = (r5 + 1);
    r5 = (r0 & 65535);
}

loc_805B8530:
{
    r0 = MemoryInline::FlatRead16((r4 + 72));
}

loc_805B8538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8544;
    }
}

loc_805B853C:
{
    r0 = (r5 + 1);
    r5 = (r0 & 65535);
}

loc_805B8544:
{
    r0 = MemoryInline::FlatRead16((r4 + 96));
}

loc_805B854C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8558;
    }
}

loc_805B8550:
{
    r0 = (r5 + 1);
    r5 = (r0 & 65535);
}

loc_805B8558:
{
    r0 = MemoryInline::FlatRead16((r4 + 120));
}

loc_805B8560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B856C;
    }
}

loc_805B8564:
{
    r0 = (r5 + 1);
    r5 = (r0 & 65535);
}

loc_805B856C:
{
    r0 = MemoryInline::FlatRead16((r4 + 144));
}

loc_805B8574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8580;
    }
}

loc_805B8578:
{
    r0 = (r5 + 1);
    r5 = (r0 & 65535);
}

loc_805B8580:
{
    r0 = MemoryInline::FlatRead16((r4 + 168));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B8588:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B8594;
    }
}

loc_805B858C:
{
    r0 = (r5 + 1);
    r5 = (r0 & 65535);
}

loc_805B8594:
{
    r4 = (r4 + 192);
    r6 = (r6 + 7);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805B84F4;
    }
}

loc_805B85A0:
{
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r5));
    r3 = (r29 * 48);
    r3 = (r3 + 16);
    ctx->lr = 0x805B85B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x805B0000u;
    r5 = 0x805C0000u;
    r7 = r29;
    r6 = 48;
    r4 = (r4 + 32584);
    r5 = (r5 + -31616);
    ctx->lr = 0x805B85D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80020E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 4;
    r6 = r31;
    MemoryInline::FlatWrite32((r30 + 140), r3);
    r5 = 0;
    r4 = 0;
    ctr = r0;
}

loc_805B85E8:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_805B85F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8608;
    }
}

loc_805B85F4:
{
    r0 = (r5 & 65535);
    r3 = MemoryInline::FlatRead32((r30 + 140));
    r0 = (r0 * 48);
    r5 = (r5 + 1);
    r3_addr_2 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_2, r6);
}

loc_805B8608:
{
    r0 = MemoryInline::FlatRead16((r31 + 24));
    r6 = (r6 + 24);
}

loc_805B8614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B862C;
    }
}

loc_805B8618:
{
    r0 = (r5 & 65535);
    r3 = MemoryInline::FlatRead32((r30 + 140));
    r0 = (r0 * 48);
    r5 = (r5 + 1);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_4, r6);
}

loc_805B862C:
{
    r0 = MemoryInline::FlatRead16((r31 + 48));
    r6 = (r6 + 24);
}

loc_805B8638:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805B8650;
    }
}

loc_805B863C:
{
    r0 = (r5 & 65535);
    r3 = MemoryInline::FlatRead32((r30 + 140));
    r0 = (r0 * 48);
    r5 = (r5 + 1);
    r3_addr_6 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_6, r6);
}

loc_805B8650:
{
    r0 = MemoryInline::FlatRead16((r31 + 72));
    r6 = (r6 + 24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B865C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B8674;
    }
}

loc_805B8660:
{
    r0 = (r5 & 65535);
    r3 = MemoryInline::FlatRead32((r30 + 140));
    r0 = (r0 * 48);
    r5 = (r5 + 1);
    r3_addr_8 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_8, r6);
}

loc_805B8674:
{
    r31 = (r31 + 96);
    r6 = (r6 + 24);
    r4 = (r4 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805B85E8;
    }
}

loc_805B8684:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805B883Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805B84C0 func_805B84C0 preserves=true fpr_mask=0x00000000
