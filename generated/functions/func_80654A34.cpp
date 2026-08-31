#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80654A34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80654A34;

loc_80654A34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    }
    r29 = r3;
    r30 = 0;
    r31 = 0x809C0000u;
    r26 = 1;
    r27 = 0x809C0000u;
    r28 = 0x809C0000u;
    goto loc_80654ADC;
}

loc_80654A60:
{
}

loc_80654A64:
{
    r5 = MemoryInline::FlatRead32((r31 + 8408));
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_80654A80;
    }
}

loc_80654A6C:
{
}

loc_80654A70:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(12))) {
        goto loc_80654A80;
    }
}

loc_80654A74:
{
    r3 = (r5 + r30);
    r4 = MemoryInline::FlatRead8((r3 + 10528));
    goto loc_80654A84;
}

loc_80654A80:
{
    r4 = 255;
}

loc_80654A84:
{
    r0 = MemoryInline::FlatRead32((r5 + 10544));
    r3 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r30));
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80654ACC;
    }
}

loc_80654A94:
{
    r3 = MemoryInline::FlatRead32((r31 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80654AAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80654ACC;
    }
}

loc_80654AB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 72));
    r3 = PPC_Slw(static_cast<uint32_t>(r26), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80654ACC;
    }
}

loc_80654AC0:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r0 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80654AD8;
    }
}

loc_80654ACC:
{
    r3 = MemoryInline::FlatRead32((r27 + -10448));
    r4 = (r30 & 255);
    ctx->lr = 0x80654AD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80533D84u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80654AD8:
{
    r30 = (r30 + 1);
}

loc_80654ADC:
{
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_80654AE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80654A60;
    }
}

loc_80654AEC:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC00007B gpr_write=0xFC00007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80654A34 func_80654A34 preserves=true fpr_mask=0x00000000
