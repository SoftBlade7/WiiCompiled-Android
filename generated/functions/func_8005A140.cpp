#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005A140(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8005A140;

loc_8005A140:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r29 = (r29_rot_0 & -4);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r5 = MemoryInline::FlatRead32((r3 + 28));
    r5_addr_0 = (r5 + r29);
    r28 = MemoryInline::FlatRead32(r5_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8005A170:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005A238;
    }
}

loc_8005A174:
{
    r12 = MemoryInline::FlatRead32(r28);
    r30 = 65536;
    r3 = r28;
    r6 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r4 = (r30 + 3);
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x8005A198u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r0 = 0;
    r6 = 0;
    r7 = 0;
    r3_addr_1 = (r3 + r29);
    MemoryInline::FlatWrite32(r3_addr_1, r0);
    r4 = 0;
    goto loc_8005A214;
}

loc_8005A1B8:
{
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r8 = (r30 + -32768);
    r5 = 0;
    ctr = r0;
}

loc_8005A1CC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8005A204;
    }
}

loc_8005A1D0:
{
    r3 = MemoryInline::FlatRead32((r31 + 28));
    r3_addr_4 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_8005A1DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005A1FC;
    }
}

loc_8005A1E0:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(r4_addr_3);
    r0 = (r0 & 32768);
}

loc_8005A1EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005A1FC;
    }
}

loc_8005A1F0:
{
    r6 = 1;
    r8 = 0;
    goto loc_8005A204;
}

loc_8005A1FC:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005A1D0;
    }
}

loc_8005A204:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r7 = (r7 + 1);
    r3_addr_6 = (r3 + r4);
    MemoryInline::FlatWrite16(r3_addr_6, static_cast<uint16_t>(r8));
    r4 = (r4 + 2);
}

loc_8005A214:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_8005A21C:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_8005A1B8;
    }
}

loc_8005A220:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8005A224:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8005A238;
    }
}

loc_8005A228:
{
    r3 = r31;
    r4 = 4;
    r5 = 0;
    // inline leaf 0x80060570 (10 guest instruction(s))
}

loc_inl0_0x80060570:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_inl0_0x80060574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80060588;
    }
}

loc_inl0_0x80060578:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_inl0_cont_80060570;
}

loc_inl0_0x80060588:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_inl0_cont_80060570:
{
    // end of inlined leaf 0x80060570
}

loc_8005A238:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r28;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8005A140 func_8005A140 preserves=true fpr_mask=0x00000000
