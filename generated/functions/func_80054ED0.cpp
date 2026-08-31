#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80054ED0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80054ED0;

loc_80054ED0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    f29.d = f1.d;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    r31 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
    r30 = r5;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    r29 = r4;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
    r28 = r3;
    r3 = (r31 & -1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80054F1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054F48;
    }
}

loc_80054F20:
{
    r0 = (r3 + -1073741824);
}

loc_80054F28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80054F5C;
    }
}

loc_80054F2C:
{
    r0 = (r3 + -2147483648);
}

loc_80054F34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80054FDC;
    }
}

loc_80054F38:
{
    r0 = (r3 + 1073741824);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80054F40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005505C;
    }
}

loc_80054F44:
{
    goto loc_800550DC;
}

loc_80054F48:
{
    f31.d = MemoryInline::FlatReadFloat32(r5);
    r30 = (r5 + 12);
    f30.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8));
    goto loc_800550E8;
}

loc_80054F5C:
{
    r0 = (r31 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054F60:
{
    r3 = r30;
    r30 = (r5 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054F74;
    }
}

loc_80054F6C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054F80;
}

loc_80054F74:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80054270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80054F80:
{
    r0 = (r31 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054F84:
{
    f31.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054F9C;
    }
}

loc_80054F94:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80054FAC;
}

loc_80054F9C:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80054270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80054FAC:
{
    r0 = (r31 & 2097152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054FB0:
{
    f30.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054FC8;
    }
}

loc_80054FC0:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_800550E8;
}

loc_80054FC8:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80054270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_800550E8;
}

loc_80054FDC:
{
    r0 = (r31 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80054FE0:
{
    r3 = r30;
    r30 = (r5 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054FF4;
    }
}

loc_80054FEC:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80055000;
}

loc_80054FF4:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800540F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80055000:
{
    r0 = (r31 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055004:
{
    f31.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005501C;
    }
}

loc_80055014:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_8005502C;
}

loc_8005501C:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800540F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_8005502C:
{
    r0 = (r31 & 2097152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055030:
{
    f30.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055048;
    }
}

loc_80055040:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_800550E8;
}

loc_80055048:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800540F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_800550E8;
}

loc_8005505C:
{
    r0 = (r31 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055060:
{
    r3 = r30;
    r30 = (r5 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055074;
    }
}

loc_8005506C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80055080;
}

loc_80055074:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80053FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80055080:
{
    r0 = (r31 & 1048576);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055084:
{
    f31.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005509C;
    }
}

loc_80055094:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_800550AC;
}

loc_8005509C:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80053FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_800550AC:
{
    r0 = (r31 & 2097152);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800550B0:
{
    f30.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800550C8;
    }
}

loc_800550C0:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_800550E8;
}

loc_800550C8:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r0 + r29);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80053FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_800550E8;
}

loc_800550DC:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    f30.d = f31.d;
    f1.d = f31.d;
}

loc_800550E8:
{
    MemoryInline::FlatWriteFloat32(r28, f31.d);
    r3 = r30;
    MemoryInline::FlatWriteFloat32((r28 + 4), f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 72u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 32));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 28));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.second;
            r28 = resolved_pair.first;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 16));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FF gpr_write=0xF00000FB gpr_return=0x00000018 fpr_read=0xE0000FFF fpr_write=0xE0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80054ED0 func_80054ED0 preserves=false fpr_mask=0xE0000000
