#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8058FFE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8058FFE8;

loc_8058FFE8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r4 = 0x80890000u;
    f31.d = MemoryInline::FlatReadFloat32((r4 + 7248));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 32));
    goto loc_80590060;
}

loc_80590028:
{
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite16((r3 + 132), static_cast<uint16_t>(r31));
    r3 = MemoryInline::FlatRead32(r30);
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    MemoryInline::FlatWriteFloat32((r3 + 56), f31.d);
    r29 = (r29 + 1);
    r30 = (r30 + 4);
    MemoryInline::FlatWriteFloat32((r3 + 52), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 64), f31.d);
    MemoryInline::FlatWriteFloat32((r3 + 60), f31.d);
}

loc_80590060:
{
    r0 = MemoryInline::FlatRead8((r28 + 36));
    r3 = (r29 & 255);
}

loc_8059006C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80590028;
    }
}

loc_80590070:
{
    r31 = MemoryInline::FlatRead32((r28 + 32));
    r29 = 0;
    goto loc_8059008C;
}

loc_8059007C:
{
    r3 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x80590084u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8058EEB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    r31 = (r31 + 4);
}

loc_8059008C:
{
    r0 = MemoryInline::FlatRead8((r28 + 36));
    r3 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80590098:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8059007C;
    }
}

loc_8059009C:
{
    r31 = MemoryInline::FlatRead32((r28 + 32));
    r29 = 0;
    goto loc_805900B8;
}

loc_805900A8:
{
    r3 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x805900B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8058EEBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    r31 = (r31 + 4);
}

loc_805900B8:
{
    r0 = MemoryInline::FlatRead8((r28 + 36));
    r3 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_805900C4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805900A8;
    }
}

loc_805900C8:
{
    // inline leaf 0x80567594 (18 guest instruction(s))
}

loc_inl1_0x80567594:
{
    r4 = 0x809C0000u;
    r3 = MemoryInline::FlatRead16((r4 + 6298));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r5 = (r4 + 6298);
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r4 + 6298), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_inl1_0x805675C0;
    }
}

loc_inl1_0x805675B0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16(r5, static_cast<uint16_t>(r0));
    r0 = 1;
    goto loc_inl1_0x805675C4;
}

loc_inl1_0x805675C0:
{
    r0 = 0;
}

loc_inl1_0x805675C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x805675C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x805675CC:
{
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 6296), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_80567594;
}

loc_inl1_return:
{
}

loc_inl1_cont_80567594:
{
    // end of inlined leaf 0x80567594
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6584));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x805A9430u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 52));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8058FFE8 func_8058FFE8 preserves=false fpr_mask=0x80000000
