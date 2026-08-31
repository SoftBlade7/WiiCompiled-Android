#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80053D00(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80053D00;

loc_80053D00:
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
    r3 = (r31 & 100663296);
}

loc_80053D4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80053D78;
    }
}

loc_80053D50:
{
    r0 = (r3 + -33554432);
}

loc_80053D58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80053DA4;
    }
}

loc_80053D5C:
{
    r0 = (r3 + -67108864);
}

loc_80053D64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80053E34;
    }
}

loc_80053D68:
{
    r0 = (r3 + -100663296);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(0));
}

loc_80053D70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053EC4;
    }
}

loc_80053D74:
{
    goto loc_80053F54;
}

loc_80053D78:
{
    r0 = (r31 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053D7C:
{
    f31.d = MemoryInline::FlatReadFloat32(r5);
    r30 = (r5 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053D94;
    }
}

loc_80053D88:
{
    f30.d = f31.d;
    f1.d = f31.d;
    goto loc_80053F60;
}

loc_80053D94:
{
    f30.d = MemoryInline::FlatReadFloat32(r30);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r30 = (r30 + 8);
    goto loc_80053F60;
}

loc_80053DA4:
{
    r0 = (r31 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053DA8:
{
    r3 = r30;
    r30 = (r5 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053DBC;
    }
}

loc_80053DB4:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053DC8;
}

loc_80053DBC:
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

loc_80053DC8:
{
    r0 = (r31 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053DCC:
{
    f31.d = f1.d;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053DDC;
    }
}

loc_80053DD4:
{
    f30.d = f1.d;
    goto loc_80053F60;
}

loc_80053DDC:
{
    r0 = (r31 & 16384);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053DE0:
{
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053DF4;
    }
}

loc_80053DEC:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053E04;
}

loc_80053DF4:
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

loc_80053E04:
{
    r0 = (r31 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053E08:
{
    f30.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053E20;
    }
}

loc_80053E18:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053F60;
}

loc_80053E20:
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
    goto loc_80053F60;
}

loc_80053E34:
{
    r0 = (r31 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053E38:
{
    r3 = r30;
    r30 = (r5 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053E4C;
    }
}

loc_80053E44:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053E58;
}

loc_80053E4C:
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

loc_80053E58:
{
    r0 = (r31 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053E5C:
{
    f31.d = f1.d;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053E6C;
    }
}

loc_80053E64:
{
    f30.d = f1.d;
    goto loc_80053F60;
}

loc_80053E6C:
{
    r0 = (r31 & 16384);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053E70:
{
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053E84;
    }
}

loc_80053E7C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053E94;
}

loc_80053E84:
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

loc_80053E94:
{
    r0 = (r31 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053E98:
{
    f30.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053EB0;
    }
}

loc_80053EA8:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053F60;
}

loc_80053EB0:
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
    goto loc_80053F60;
}

loc_80053EC4:
{
    r0 = (r31 & 8192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053EC8:
{
    r3 = r30;
    r30 = (r5 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053EDC;
    }
}

loc_80053ED4:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053EE8;
}

loc_80053EDC:
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

loc_80053EE8:
{
    r0 = (r31 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053EEC:
{
    f31.d = f1.d;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053EFC;
    }
}

loc_80053EF4:
{
    f30.d = f1.d;
    goto loc_80053F60;
}

loc_80053EFC:
{
    r0 = (r31 & 16384);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053F00:
{
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053F14;
    }
}

loc_80053F0C:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053F24;
}

loc_80053F14:
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

loc_80053F24:
{
    r0 = (r31 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053F28:
{
    f30.d = f1.d;
    r3 = r30;
    r30 = (r30 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053F40;
    }
}

loc_80053F38:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053F60;
}

loc_80053F40:
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
    goto loc_80053F60;
}

loc_80053F54:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29792));
    f30.d = f31.d;
    f1.d = f31.d;
}

loc_80053F60:
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
// RECOMP_REGISTRATION base 0x80053D00 func_80053D00 preserves=false fpr_mask=0xE0000000
