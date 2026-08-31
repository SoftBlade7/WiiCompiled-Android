#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80552A74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80552A74;

loc_80552A74:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = 0x809C0000u;
    r31 = (r31 + -5376);
    r29 = 0;
    r28 = 0;
    r27 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r3);
    r30 = MemoryInline::FlatRead32((r31 + 188));
}

loc_80552AA0:
{
    r0 = MemoryInline::FlatRead8((r31 + 167));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80552AA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80552B28;
    }
}

loc_80552AAC:
{
    ctr = r28;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80552AB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80552B28;
    }
}

loc_80552AB8:
{
    r0 = MemoryInline::FlatRead32((r31 + 192));
    r28 = (r28 + -1);
    r6 = MemoryInline::FlatRead32((r31 + 80));
    r4 = (r29 + r0);
    r5 = MemoryInline::FlatRead32((r31 + 216));
    r3 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    r0 = (r6 + -1);
    r5 = (r5 + 1);
    MemoryInline::FlatWriteRam32((r31 + 216), r5);
    r3 = (r3 * r6);
    r3 = (r4 - r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80552AE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80552B0C;
    }
}

loc_80552AEC:
{
    r0 = MemoryInline::FlatRead8((r31 + 166));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80552AF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80552B28;
    }
}

loc_80552AF8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r31 + 180));
    r30 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_80552B20;
}

loc_80552B0C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r3 + r30);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r30 = r4;
}

loc_80552B20:
{
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80552AB8;
    }
}

loc_80552B28:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    r3 = (r1 + 8);
    ctx->lr = 0x80552B34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80552BA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 192));
    r28 = r3;
    r5 = MemoryInline::FlatRead32((r31 + 80));
    r4 = (r29 + r0);
    r3 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
    r0 = (r5 + -1);
    r3 = (r3 * r5);
    r3 = (r4 - r3);
}

loc_80552B58:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80552B88;
    }
}

loc_80552B5C:
{
    r0 = MemoryInline::FlatRead8((r31 + 166));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80552B64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80552B7C;
    }
}

loc_80552B68:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r31 + 180));
    r30 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_80552B9C;
}

loc_80552B7C:
{
    r3 = (r27 + 1208);
    ctx->lr = 0x80552B84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801AA824u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80552B9C;
}

loc_80552B88:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r3 + r30);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r30 = r4;
}

loc_80552B9C:
{
    r29 = (r29 + 1);
    goto loc_80552AA0;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80552A74 func_80552A74 preserves=true fpr_mask=0x00000000
